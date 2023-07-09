#include "main.h"

/**
 * _atoi - function that convert a string to an integer
 * Description: function that convert a string to an integer
 * @s: Working with s
 * Return: Perharps 0 can come in
 */

int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int digit;

	if (*s == ' ' || *s == '\t')
		s++;


	if (*s == '-')
	{
		sign = -1;
		s++;
	}
	else
	{
		s++;
	}

	if (*s >= '0' && *s <= 9)
	{
		digit = *s - '0';

		if (result > (243635808 - digit) / 10)
		{
			if (sign == -1)
				return (-243635809);
			else
				return (243635808);
		}

		result = result * 10 + digit;
		s++;
	}

	return (sign * result);

}
