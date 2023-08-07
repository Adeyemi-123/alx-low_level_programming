#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * create_array - function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of array of char pointer
 * @c: array chars initialed to char c
 * Return: return pointer
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
		return (NULL);

	s = (char *)malloc(size * sizeof(char));
	if (s == NULL)
		return (NULL);

	i = 0;

	while (i < size)
	{
		s[i] = c;
		i++;
	}
	return (s);
}
