#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_all - function that prints anything
 * @format:  list of types of arguments passed to the function
 * Return: void
 */

void print_all(const char * const format, ...)
{
	const char *ptr = format;
	char c;
	int num;
	float fnum;
	char *str;

	va_list args;
	va_start(args, format);

	while (*ptr)
	{
		switch (*ptr)
		{
			case 'c':
				c = va_arg(args, int);
				printf("%c", c);
				break;

			case 'i':
				num = va_arg(args, int);
				printf("%d", num);
				break;

			case 'f':
				fnum = va_arg(args, double);
				printf("%f", fnum);
				break;

			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
				{
					printf("(nil)");
				}
				printf("%s", str);

				break;

			default:
				break;
		}
		ptr++;
		if (*ptr)
			printf(", ");
	}

	va_end(args);

	printf("\n");
}
