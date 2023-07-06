#include "main.h"

/**
 * _sqrt_recursion_helper -  returns the natural square root of a number.
 * @n:the number
 * @divisor: the divisor
 * Return: return the natural square root of a number.
 */

int _sqrt_recursion_helper(int n, int divisor)
{
	if (divisor == 0)
		return (-1);
	if (n / divisor == divisor)
	{
		if (n % divisor == 0)
			return (divisor);
		else
			return (-1);
	}
	return (_sqrt_recursion_helper(n, divisor - 1));
}

/**
 * _sqrt_recursion -  returns the natural square root of a number.
 * @n:the number
 *
 * Return: return the natural square root of a number.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1 || n == 0)
		return (n);
	return (_sqrt_recursion_helper(n, n - 1));
}
