#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - function that concatenates two strings.
 * @s1: pointer no. 1
 * @s2: pointer no. 2
 * @n: size equivalent to length of s2
 * Return: return pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int len1;
	unsigned int len2;
	size_t total;
	void *str;
	size_t real_len2;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);
	total = len1 + len2 + 1;

	real_len2 = (n >= len2) ? len2 : n;
	str = malloc(total);
	if (str == NULL)
		return (NULL);

	strcpy(str, s1);
	strncat(str, s2, real_len2);

	return (str);
}
