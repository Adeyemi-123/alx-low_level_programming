#include "main.h"

/**
 * main - Entry point
 * @argc: length of the argument in program
 *
 * @argv: array of string containing the actual argument
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
