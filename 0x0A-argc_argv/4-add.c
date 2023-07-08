#include "main.h"
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>

/**
 * main - Entry point
 * @argv: array of string containing the actual argument
 * @argc: count of the argument
 * Return: return 1 if non digit are found otherwise return 1
 */

int main(int argc, char *argv[])
{
	int i, j;
	int sum;
	int number;

	sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		j = 0;

		while (argv[i][j] != '\0')
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}

		number = atoi(argv[i]);

		if (number < 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += number;
	}
	printf("%d\n", sum);
	return (0);
}
