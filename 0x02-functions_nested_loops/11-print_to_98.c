#include "main.h"

/**
 * print_to_98 - all natural numbers from n to 98
 * @n: working on n
 * @i: working with i also
 * Description: prints all natural numbers from n to 98, followed by a new line.
 * Return: void
 */

void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			_putchar('0' + i / 10);
			_putchar('0' + i % 10);
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}

		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			_putchar('0' + i / 10);
			_putchar('0' + i % 10);
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
}