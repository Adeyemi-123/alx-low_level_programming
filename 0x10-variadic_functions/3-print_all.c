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
	int i = 0;
	char c;
	char *s;
	float f;
	int num;

	va_list args;

	va_start(args, format);

	while (format[i]) 
	{
		if (format[i] == 'c')
		{
			c = (char) va_arg(args, int);
			printf("%c", c);
		}
		else if (format[i] == 'i')
		{
			num = va_arg(args, int);
			printf("%d", num);
		}
		else if (format[i] == 'f')
		{
			f = (float) va_arg(args, double);
			printf("%f", f);
		}
		else if (format[i] == 's')
		{
			s = va_arg(args, char *);
			if (s == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", s);
			}
        	}
        	i++;
	}

	va_end(args);
	printf("\n");
}
