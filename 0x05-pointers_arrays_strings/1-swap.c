#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * Description: function that swaps the values of two integers.
 * @a: working with int a
 * @b: working with int b
 */

void swap_int(int *a, int *b)
{
	int val = *a;

	*a = *b;
	*b = val;
}
