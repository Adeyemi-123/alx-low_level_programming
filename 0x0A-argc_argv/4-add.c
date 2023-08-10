#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 * @argc: size of array pointer
 * @argv: pointer of array
 * Return: return 1 or sum
 */

int main(int argc, char *argv[])
{
	int i;
	int sum;
	int num;

	sum = 0;


	if (argc == 1)
	{
		printf("%d\n", 0);
		return (1);
	}

	for (i = 1; i < argc; i++)
	{
		num = atoi(argv[i]);

		if (num == 0 && argv[i][0] != '0')
		{
			printf("Error\n");
			return (1);
		}
		sum += num;
	}

	printf("%d\n", sum);
	return (sum);
}
