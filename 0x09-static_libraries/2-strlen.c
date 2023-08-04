#include "main.h"

/**
 * _strlen - returns the length of a string.
 * Description: function that returns the length of a string.
 * @s: working with s
 * Return: return l
 */

int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	return (l);
}
