#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - function that prints a name
 * @name: name to be printed
 * @f: pointer to char
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}

/**
 * print_name_here - function that prints a name
 * @name: name to be printed
 * Description: function that print a name only with a new line
 */

void print_name_here(char *name)
{
	char *current_name;

	current_name = name;

	while (*current_name != '\0')
	{
		putchar(*current_name);
		current_name++;
	}
	putchar('\n');
}
