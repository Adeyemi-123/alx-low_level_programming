#include "main.h"

/**
 * is_prime_number - identify if it is a prime number
 * @n: number
 * Return: return 1 or 0
 */

int is_prime_number(int n)
{
	int i;

	if (n <= 1)
		return (1);

	for (i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
			return (0);
	}
	return (1);
}
