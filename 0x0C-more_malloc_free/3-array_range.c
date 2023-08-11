#include "main.h"
#include <stdlib.h>
#include <string.h>


/**
 * array_range - function that creates an array of integers.
 * @max: maximum value
 * @min: minimum value
 * Return: function returns pointer in the end
 */

int *array_range(int min, int max)
{
	size_t total;
	int *array;
	unsigned long int i;

	if (min > max)
		return (NULL);

	total = max - min + 1;

	array = (int *)malloc(total * sizeof(int));
	if (array  == NULL)
		return (NULL);

	for (i = 0; i < total; i++)
	{
		array[i] = min + i;
	}
	return (array);
}
