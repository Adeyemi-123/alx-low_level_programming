#include "main.h"
#include <stdlib.h>

/**
 * *leet - function that encodes a string into 1337.
 * @str: string to be replaced
 * Return: encoded_str
 */

char *leet(char *str)
{
	static char encoded_str[100];
	int i, j;

	for (i = 0, j = 0; str[i] != '\0'; i++, j++)
	{
		encoded_str[j] = str[i];

		if (str[i] == 'a' || str[i] == 'A')
			encoded_str[j] = '4';
		else if (str[i] == 'e' || str[i] == 'E')
			encoded_str[j] = '3';
		else if (str[i] == 'o' || str[i] == 'O')
			encoded_str[j] = '0';
		else if (str[i] == 't' || str[i] == 'T')
			encoded_str[j] = '7';
		else if (str[i] == 'l' || str[i] == 'L')
			encoded_str[j] = '1';
	}
	encoded_str[j] = '\0';
	return (encoded_str);
}
