#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - function that prints strings, followed by a new line.
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	const char *ptr;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		ptr = va_arg(args, const char *);
		if (ptr == NULL)
		{
			printf("(nil)");
		}
		printf("%s", ptr);

		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
	}

	va_end(args);

	printf("\n");
}
