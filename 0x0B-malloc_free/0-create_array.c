#include "main.h"
#include <stdlib.h>

/**
 * *create_array - function that creates an array of chars
 * and initializes it with a specific char.
 * @size: the number argument in array
 * @c: The the specific character where array of characters
 * is initialiezed
 * Return: Always 0 (Success)
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
	{
		return (NULL);
	}

	array = (char *)malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
