#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Function that prints in a variadic function
 * @separator: separator of string
 * @n: size of string
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	const char *str;

	va_list args;

	va_start(args, n);

	if (separator == NULL)
		return;

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, const char *);
		if (str != NULL)
		{
			printf("%s", str);
		}
		else
		{
			printf("nil");
		}

		if (i !=  n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}
