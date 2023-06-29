#include "main.h"

/**
 * *_strcat - function that concatenates two strings.
 * Description: function that concatenates two strings.
 * @src: appends the src string to the dest
 * @dest: Destination
 * Return: return void
 */

char *_strcat(char *dest, char *src)
{
	char *dest_end = dest;

	while (*dest_end != '\0')
	{
		dest_end++;
	}

	while (*src != '\0')
	{
		*dest_end = *src;
		dest++;
		src++;
	}
	*dest_end = '\0';

	return (dest);
}
