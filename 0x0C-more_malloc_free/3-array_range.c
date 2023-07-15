#include "main.h"
#include <stdlib.h>

/**
 * *array_range - function that creates an array of integers.
 * @min: minimum integer
 * @max: maximum integer
 * Return: If malloc fails, return NULL
 * otherwise return pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *arr;
	size_t s, i;

	if (min > max)
		return (NULL);

	s = max - min + 1;

	arr = malloc(s * sizeof(int));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < s; i++)
	{
		arr[i] = min++;
	}
	return (arr);
}
