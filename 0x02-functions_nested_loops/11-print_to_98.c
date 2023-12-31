#include "main.h"

/**
 * print_to_98 - all natural numbers from n to 98
 * @n: working on n
 * Description: prints all natural numbers from n to 98
 * Return: void
 */

void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			_putchar('0' + i);
			_putchar('0' + i);
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
			_putchar('0' + i);
			_putchar('0' + i);
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
}
