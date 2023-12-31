#include "main.h"

/**
 * *_memcpy - copies n bytes from memory area src to memory area dest
 * @dest: destination; to memory area dest
 * @src: memory area
 * @n: limited number of bytes
 * Return: return dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = *src;
		src++;
	}
	return (dest);
}
