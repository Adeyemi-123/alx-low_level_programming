#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: size of variadic members
 * Return: return sum of members
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int nums;
	int sum;

	if (n == 0)
		return (0);

	va_start(args, n);
	sum = 0;

	for (i = 0; i < n; i++)
	{
		nums = va_arg(args, int);
		sum += nums;
	}
	va_end(args);

	return (sum);
}
