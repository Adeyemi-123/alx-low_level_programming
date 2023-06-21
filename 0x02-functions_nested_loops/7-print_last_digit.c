#include "main.h"

/**
 * print_last_digit - last digit of a number
 * @n: last digit of integer n
 * Return: return ld
 */

int print_last_digit(int n)
{
	int ld;

	ld = n % 10;

	if (ld < 0)
	{
		ld = -ld;
	}
	_putchar(ld + '0');
	return (ld);
}
