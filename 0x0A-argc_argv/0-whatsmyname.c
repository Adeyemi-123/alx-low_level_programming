#include "main.h"
#include <stdio.h>

/**
 * main -  Entry point
 * @argc: size of the array argument in argv
 * @argv: Array of argument
 * Return: Always (0) Success
 */

int main(int argc, char *argv[])
{
	int i;

	i = 0;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[0]);
	}

	return (0);
}
