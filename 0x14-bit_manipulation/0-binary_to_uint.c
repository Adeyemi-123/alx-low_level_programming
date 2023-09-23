#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - function that converts
 * a binary number to an unsigned int
 * @b: b is pointing to 0 and 1
 * @result: value to be returned in code
 * Result: The converted unsigned int, or 0 if there is an invalid character
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result;

	if (b == NULL)
		return (0);

	result = 0;

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);

		result = result * 2 + (*b - '0');
		b++;
	}

	return (result);
}
