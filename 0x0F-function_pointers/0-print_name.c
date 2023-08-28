#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_name_as_is - function that prints a name as it is
 * @name: name to be printed
 */

void print_name_as_is(char *name)
{
	char *prefix = "Hello, my name is ";
	int i = 0;

	while (prefix[i])
	{
		write(1, &prefix[i], 1);
		i++;
	}

	i = 0;
	while (name[i])
	{
		write(1, &name[i], 1);
		i++;
	}

	write(1, "\n", 1);
}

/**
 * print_name_uppercase - prints name in uppercase
 * @name: name to be printed
 */

void print_name_uppercase(char *name)
{
	char *prefix = "Hello, my uppercase name is ";
	int i = 0;

	while (prefix[i])
	{
		write(1, &prefix[i], 1);
		i++;
	}

	i = 0;
	while (name[i])
	{
		char uppercase_char = name[i];
		if (uppercase_char >= 'a' && uppercase_char <= 'z')
		{
			uppercase_char += 'A' - 'a';
		}
		write(1, &uppercase_char, 1);
		i++;
	}
}
/**
 * print_name - function that prints a name.
 * @name: name to be printed
 * @f: pointer to retrieve name
 * Return: return (void)
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
