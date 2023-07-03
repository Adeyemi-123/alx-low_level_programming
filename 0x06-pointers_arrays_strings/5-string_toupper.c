#include "main.h"

/**
 * *string_toupper - changes all lowercase
 * letters of a string to uppercase.
 * @str: string to be converted
 * Description:  changes all lowercase
 * letters of a string to uppercase.
 * Return: return str
 */

char *string_toupper(char *str)
{
	char *s = str;

	while (*s != '\0')
	{
		if (*s >= 'a' && *s <= 'z')
		{
			*s = *s - ('a' - 'A');
		}
		s++;
	}
	return (str);
}
