#include "main.h"

/**
 * helper_sqrt_recursion - helper of the original function
 * @n: square root of the value of n
 * @c: square root of n
 * Return: function returns the value of c
 */

int helper_sqrt_recursion(int n, int c)
{
	if (c * c == n)
	{
		return (c);
	}

	if (c * c > n)
	{
		return (-1);
	}
	return (helper_sqrt_recursion(n, c + 1));
}

/**
 * _sqrt_recursion - function that returns the natural square root
 * @n: calculate the square root of n
 * Return: return helper function otherwise 1 or -1
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}

	if (n == 1)
	{
		return (1);
	}

	if (n < 0)
	{
		return (-1);
	}
	return (helper_sqrt_recursion(n, 1));
}
