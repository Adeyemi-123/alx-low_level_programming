#include "main.h"
#include <stdio.h>

int helper_palindrome(char *s, int n)
{
	n = 1;
	
	if (*s == '\0')
	{
		return (0);
	}

	return n + helper_palindrome(s + 1);
}

int helper1_palindrome(int b, int h)
{

	b = 0;
	h = n - 1;

	if (b == h)
	{
		return(1);
	}
	return helper_palindrome(s, n);
}

int is_palindrome(char *s)
{
	if (*s == 0)
	{
		return (1);
	}

	return helper1_palindrome(b, h);
}
