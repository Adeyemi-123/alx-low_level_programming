#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src
 * Description: copies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer pointed to by dest
 * @dest: destination
 * @src: string pointed to src
 * Return: return pty
 */

char *_strcpy(char *dest, char *src)
{
	char *pty = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (pty);
}
