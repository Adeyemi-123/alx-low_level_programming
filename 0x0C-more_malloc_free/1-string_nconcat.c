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
	int total;
	char *str;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);
	total = len1 + len2 + 1;

	str = (char *)malloc(total * sizeof(char));
	if (str == NULL)
		return (NULL);

	memcpy(str, s1, len1);
	if (n >= len2)
		return (s2);
	memcpy(str + len1, s2, n);

	return (str);


}
