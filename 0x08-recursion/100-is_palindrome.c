#include "main.h"
#include <string.h>

/**
 * is_palindrome_helper - checks for palindrome strings
 * @s: the string
 * @start: beginning of string
 * @end: end of string
 * Return: return 1 if string is palindrome otherwise 0
 */

int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
	return (is_palindrome_helper(s, start + 1, end - 1));
}

/**
 * is_palindrome - checks for palindrome strings
 * @s: the string
 * Return: return 1 if string is palindrome otherwise 0
 */

int is_palindrome(char *s)
{
	int length = strlen(s);

	return (is_palindrome_helper(s, 0, length - 1));
}
