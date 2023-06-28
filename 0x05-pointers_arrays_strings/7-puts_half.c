#include "main.h"

/**
 * puts_half -  prints half of a string
 * Description: prints half of a string, followed by a new line
 * @str: str to work on
 */

void puts_half(char *str)
{
	int length = 0;
	int half, i;

	while (str[length] != '\0')
	{
		length++;
	}
	half = (length - 1) / 2;

	for (i = half + 1; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
