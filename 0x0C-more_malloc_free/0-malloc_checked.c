#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *malloc_checked - function that allocates memory using malloc
 * @b: initial size of function
 * Return: return pointer
 */

void *malloc_checked(unsigned int b)
{
	void *str = malloc(b);

	if (str == NULL)
	{
		char *errormessage = "failed malloc\n";
		char *chn = errormessage;

		while (*chn != '\0')
		{
			putchar(*chn);
			chn++;
		}
		exit(98);
	}
	return (str);
}
