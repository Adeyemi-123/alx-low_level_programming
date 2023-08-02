#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - function that returns the length of a string
 * @s: pointer to the string s
 * Return: return recursion
 */

int _strlen_recursion(char *s)
{
	int n;

	n = 1;

	if (*s == '\0')
	{
		return (1);
	}
	return (n + _strlen_recursion(s + 1));
}
