#include "main.h"
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

/**
 * is_palindrome_helper - function that decide the main function
 * @start: start of length
 * @end: end of length
 * Return: return function
 */

bool is_palindrome_helper(char *start, char *end)
{
	if (start >= end)
	{
		return (true);
	}
	if (*start != *end)
	{
		return (false);
	}

	return (is_palindrome_helper(start + 1, end - 1));
}

/**
 * is_palindrome - function that returns 1 if a string
 * @s: pointer of function
 * Return: returns main function
 */

int is_palindrome(char *s)
{
	int length = strlen(s);

	return (is_palindrome_helper(s, s + length - 1));
}
