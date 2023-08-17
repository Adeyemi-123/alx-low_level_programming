#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

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
