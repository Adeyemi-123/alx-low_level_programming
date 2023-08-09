#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * alloc_grid - function that returns a pointer
 * to a 2 dimensional array of integers.
 * @width: width of dimension
 * @height: height of dimension
 * Return: return pointer
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **ptr;


	if (width <= 0)
		return (NULL);
	if (height <= 0)
		return (NULL);


	ptr = (int **)malloc(width * sizeof(int *));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < width; i++)
	{
		ptr[i] = (int *)malloc(height * sizeof(int));
		if (ptr[i] == NULL)
			return (NULL);
	}

	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			ptr[i][j] = 0;
		}
	}

	return (ptr);

	for (i = 0; i < width; i++)
	{
		free(ptr[i]);
	}
	free(ptr);

}
