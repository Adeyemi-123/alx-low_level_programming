#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *_strdup - a pointer to a newly allocated space in memory
 * @str: The original string
 * Return: return pointer of duplicate string
 */

char *_strdup(char *str)
{
	char *new_str;
	size_t length;

	if (str == NULL)
	{
		return (NULL);
	}

	length = strlen(str);

	new_str = (char *)malloc((length + 1) * sizeof(char));

	if (new_str == NULL)
	{
		return (NULL);
	}

	strcpy(new_str, str);

	return (new_str);
}
