#include "main.h"

/**
 * puts2 - every other character of a string
 * Description: every other character of a string
 * starting with the first character
 * @str: working with str
 */

void puts2(char *str)
{
	int index = 0;

	while (str[index] != '\0')
	{
		_putchar(str[index]);
		index += 2;
	}
	_putchar('\n');
}
