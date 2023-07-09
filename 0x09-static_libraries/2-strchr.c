#include "main.h"
#include <stddef.h>

/**
 * *_strchr - function that locates a character in a string.
 * @s: the string
 * @c: the character
 * Return: return pointer
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (c == s[i])
		{
			return (&(s[i]));
		}
	}
	return (NULL);
}
