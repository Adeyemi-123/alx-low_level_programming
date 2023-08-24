#include <stdio.h>
#include "main.h"

/**
 * wildcmp - function that compares two strings
 * @s1: character no.1
 * @s2: character no. 2
 * Return: returns (0)
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	if (*s1 == *s2 || *s2 == '*')
	{
		return (wildcmp(s1 + 1, s2 + 1) || wildcmp(s1 + 1, s2));
	}
	return (0);
}
