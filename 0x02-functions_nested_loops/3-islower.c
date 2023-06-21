#include "main.h"

/**
 * _islower - checks for lowercase characters
 * @c: the character to be checked
 * Return: returns 1 or 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
