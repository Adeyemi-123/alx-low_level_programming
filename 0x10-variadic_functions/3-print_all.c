#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Function that prints anything
 * @format: LIst of type of variable passed in the function
 *
 */

void print_all(const char * const format, ...)
{
	char c;
	char *spr = "";
	int i;
	float f;
	char *s;
	int j;

	va_list args;

	va_start(args, format);

	j = 0;

	while (format && format[j] != '\0')
	{
		if (j != 0)
		{
			printf("%s%c", spr, j);
			spr = ", ";
		}
		if (format[j] == 'c')
		{
			c = (char)va_arg(args, int);
			printf("%c", c);
		}
		else if (format[j] == 'f')
		{
			f = (float)va_arg(args, double);
			printf("%f", f);
		}
		else if (format[j] == 'i')
		{
			i = va_arg(args, int);
			printf("%d", i);
		}
		else if (format[j] == 's')
		{
			s = va_arg(args, char *);
			if (s == NULL)
			{
				printf("nil");
			}
			printf("%s", s);
		}
		j++;
	}

	va_end(args);

	printf("\n");
}
