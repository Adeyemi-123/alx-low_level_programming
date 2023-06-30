#include "main.h"

/**
 * *_strncpy - copies a string.
 * Description: function that copies a string.
 * @src: Source code
 * @dest: destination
 * @n: number of bytes
 * Return: return void
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
