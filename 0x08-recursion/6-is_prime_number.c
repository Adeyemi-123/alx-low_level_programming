#include "main.h"

/**
 * helper_prime_number - helper function for the original function
 * @n: value of suspected prime number
 * @c: divisor
 * Return: returns recursion of given code
 */

int helper_prime_number(int n, int c)
{
	if (c * c > n)
	{
		return (1);
	}

	if (n % c == 0)
	{
		return (0);
	}

	return (helper_prime_number(n, c + 1));
}

/**
 * is_prime_number - Function that return 1 if input integer is prime
 * @n: value of input integer
 * Return: return helper function
 */

int is_prime_number(int n)
{
	if (n == 1)
	{
		return (0);
	}

	if (n < 0)
	{
		return (0);
	}
	return (helper_prime_number(n, 2));
}
