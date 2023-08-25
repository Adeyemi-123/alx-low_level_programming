#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"


char *multiplyStrings(char *num1, char *num2)
{
	int len1 = strlen(num1);
	int len2 = strlen(num2);
	int lenResult = len1 + len2;
	int carry, i, j, product;
	char *result = calloc(lenResult + 1, sizeof(char));

	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			product = (num1[i] - '0') * (num2[j] - '0') + carry + result[i + j + 1] - '0';
			carry = product / 10;
			result[i + j + 1] = (product % 10) + '0';
		}
		result[i] += carry;
	}

	return (result);
}


int isNumeric(const char *str) 
{
	while (*str)
	{
		if (!isdigit(*str))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

