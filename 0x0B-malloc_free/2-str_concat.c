#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - function that concatenates two strings.
 * @s1: string no. 1
 * @s2: string no. 2
 * Return: returns newly allocated space
 */

char *str_concat(char *s1, char *s2)
{
	int len1;
	int len2;
	size_t len;
	char *str;

	len1 = strlen(s1);
	len2 = strlen(s2);
	len = len1 + len2;

	str = (char *)malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);

	strcpy(str, s1);

	strcat(str, s2);

	return (str);

}
