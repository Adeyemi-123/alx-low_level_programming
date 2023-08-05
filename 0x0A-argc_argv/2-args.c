#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * @argc: size of argument
 * @argv: array of argument
 * Return: Always (0) Success
 */

int main(int argc, char *argv[])
{
	int i;

	i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
