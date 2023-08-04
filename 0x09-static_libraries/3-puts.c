#include "main.h"

/**
 * _puts - function that prints a string,
 * Description: function that prints a string, to stdout.
 * @str: work with this
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
