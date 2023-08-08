#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - function that returns a pointer to a newly allocated space
 * @str: Original pointer to string
 * Return: returns (s) newly newly allocated space
 */

char *_strdup(char *str)
{
	char *s;
	int len;

	if (str == NULL)
		return (NULL);

	len = strlen(str);

	s = (char *)malloc((len + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);

	strcpy(s, str);

	return (s);

}
