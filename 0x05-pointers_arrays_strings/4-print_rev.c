#include "main.h"

/**
 * print_rev - prints a string, in reverse
 * Description: prints a string, in reverse, followed by a new line
 * @s: working with s
 */

void print_rev(char *s)
{
	int length = 0;

	char *prtrev = s;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	prtrev += length - 1;

	while (length > 0)
	{
		_putchar(*prtrev);
		prtrev--;
		length--;
	}
	_putchar('\n');
}
