#include "main.h"

/**
 * *_strncat - function that concatenates two strings.
 * Description: function that concatenates two strings
 * @src: source code
 * @dest: destination
 * @n: limit of bytes
 * Return: return void
 */

char *_strncat(char *dest, char *src, int n)
{
	char *dest_end = dest;

	while (*dest_end != '\0')
	{
		dest_end++;
	}

	while (*src != '\0' && n > 0)
	{
		*dest_end = *src;
		dest_end++;
		src++;
		n--;
	}
	*dest_end = '\0';

	return (dest);
}
