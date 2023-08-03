#include "main.h"
#include <stdio.h>

/**
 * factorial - function that returns the factorial
 * @n: Find the factorial of the given number
 * Return: return factorial of n
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
