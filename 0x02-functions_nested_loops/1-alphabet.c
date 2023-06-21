#include "main.h"

/**
 * print_alphabet - Print alphabets in lowercase
 * Description: print alphabet in lowercase 'a - z'
 * Return: Always 0
 */

void print_alphabet(void)

{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
