#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * argstostr - function that splits a string into words.
 * @ac: size of av
 * @av: pointer of the function
 * Return: returns result
 */

char *argstostr(int ac, char **av)
{
	int total_length, current_position, i;
	char *result;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	total_length = 0;
	for (i = 0; i < ac; i++)
	{
		total_length += strlen(av[i]) + 1;
	}

	result = (char *)malloc(total_length + 1);
	if (result == NULL)
	{
		return (NULL);
	}

	current_position = 0;
	for (i = 0; i < ac; i++)
	{
		strcpy(result + current_position, av[i]);
		current_position += strlen(av[i]);
		result[current_position] = '\n';
		current_position++;
	}

		result[total_length] = '\0';

	return (result);
}
