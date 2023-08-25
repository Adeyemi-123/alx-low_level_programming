#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "main.h"

bool is_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

int count_words(char *str)
{
	int i, count = 0;
	bool in_word = false;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (is_space(str[i]))
		{
			in_word = false;
		}
		else if (!in_word)
		{
			count++;
			in_word = true;
		}
	}

	return (count);
}


char **strtow(char *str)
{
	int num_words, word_count, start_idx, i, word_length, j;
	bool in_word;
	char **words;

	if (str == NULL || strcmp(str, "") == 0)
	{
		return (NULL);
	}

	num_words = count_words(str);

	words = (char **)malloc((num_words + 1) * sizeof(char *));
	if (words == NULL)
	{
		return (NULL);
	}

	word_count = 0;
	in_word = false;
	start_idx = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (is_space(str[i]))
		{
			if (in_word)
			{
				word_length = i - start_idx;
				words[word_count] = (char *)malloc((word_length + 1) * sizeof(char));
				if (words[word_count] == NULL)
				{
					for (j = 0; j < word_count; j++)
					{
						free(words[j]);
					}
					free(words);
					return (NULL);
				}
				strncpy(words[word_count], str + start_idx, word_length);
				words[word_count][word_length] = '\0';
				word_count++;
				in_word = false;
			}
		}
		else if (!in_word)
		{
			start_idx = i;
			in_word = true;
		}
	}

	if (in_word)
	{
		word_length = strlen(str) - start_idx;
		words[word_count] = (char *)malloc((word_length + 1) * sizeof(char));
		if (words[word_count] == NULL)
		{
			for (j = 0; j < word_count; j++)
			{
				free(words[j]);
			}
			free(words);
			return (NULL);
		}
		strncpy(words[word_count], str + start_idx, word_length);
		words[word_count][word_length] = '\0';
		word_count++;
	}

	words[word_count] = NULL;

	return (words);
}

void free_str_array(char **array)
{
	int i;

	if (array == NULL)
	{
		return;
	}

	for (i = 0; array[i] != NULL; i++)
	{
		free(array[i]);
	}

	free(array);
}
