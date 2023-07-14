#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *string_nconcat - function that concatenates two strings.
 * @s1: The first string
 * @s2: The second string
 * @n: number of argument of the program
 * Return: If the function fails, it should return NULL
 * otherwise return pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l2;
	unsigned int l1;
	int length;
	char *result;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
		s2 = "";

	l2 = strlen(s2);
	l1 = strlen(s1);
	length = l1 + l2;

	if (n >= l2)
		n = l2;

	result = (char *)malloc((length + n + 1) * sizeof(char));

	if (result == NULL)
		return (NULL);

	memcpy(result, s1, l1);
	memcpy(result + l1, s2, n);

	result[l1 + n] = '\0';

	return (result);
}
