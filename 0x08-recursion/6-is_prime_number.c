#include "main.h"
#include <stdio.h>

/**
 * is_prime_number_helper - helper for this code
 * @n: number
 * @divisor: divisor being checked
 *
 * Return: return 1 or 0
 */

int is_prime_number_helper(int n, int divisor)
{
	if (n <= 1)
		return (0);
	if (divisor == 1)
		return (1);
	if (n % divisor == 0)
		return (0);
	else
		return (is_prime_number_helper(n, divisor - 1));

}

/**
 * is_prime_number - identify if it is a prime number
 * @n: number
 * Return: 1 if number is prime otherwise 0
 */

int is_prime_number(int n)
{
	return (is_prime_number_helper(n, n - 1));
}
