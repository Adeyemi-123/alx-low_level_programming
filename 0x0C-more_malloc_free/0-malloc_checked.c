#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: size of pointer
 * Return: returns pointer
 */

void *malloc_checked(unsigned int b)
{
	char *str;

	str = (char *)malloc(b * sizeof(char));
	if (str == NULL)
	{
		exit(98);
	}

	return (str);
}
