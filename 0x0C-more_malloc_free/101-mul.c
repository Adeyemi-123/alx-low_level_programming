#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"
#include <string.h>

/**
 * multiplyStrings - A good number of strings
 * @num1: first number
 * @num2: second number
 * Return: returns result
 */

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
			product = (num1[i] - '0') * (num2[j] - '0') +
					carry + result[i + j + 1] - '0';
			carry = product / 10;
			result[i + j + 1] = (product % 10) + '0';
		}
		result[i] += carry;
	}
	return (result);
}

/**
 * isNumeric - One of the functions to solve this given task
 * @str: pointer to the string
 * Return: returns (1);
 */

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

/**
 * main - Entry point
 * @argc: size of of argv
 * @argv: pointer to member variables
 * Return: Always (0) Success
 */

int main(int argc, char *argv[])
{
	char *num1;
	char *num2, *result;

	if (argc != 3 || !isNumeric(argv[1]) || !isNumeric(argv[2]))
	{
		printf("Error\n");
		return (98);
	}

	num1 = argv[1];
	num2 = argv[2];

	while (*num1 == '0' && *(num1 + 1) != '\0')
	{
		num1++;
	}
	while (*num2 == '0' && *(num2 + 1) != '\0')
	{
		num2++;
	}
	if (*num1 == '\0' || *num2 == '\0')
	{
		printf("0\n");
		return (0);
	}

	result = multiplyStrings(num1, num2);

	printf("%s\n", result);

	free(result);

	return (0);
}
