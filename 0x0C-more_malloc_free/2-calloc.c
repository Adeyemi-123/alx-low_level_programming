#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc -  function that allocates memory for an array, using malloc.
 * @nmemb: the given array
 * @size: size of individual array
 * Return: return pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	size_t totalsize;

	if (nmemb == 0 || size == 0)
		return (NULL);

	totalsize = nmemb * size;

	ptr = malloc(totalsize);
	if (ptr == NULL)
		return (NULL);

	memset(ptr, 0, totalsize);
	return (ptr);
}
