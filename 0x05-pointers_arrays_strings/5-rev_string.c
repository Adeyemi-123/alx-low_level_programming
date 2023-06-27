#include "main.h"

/**
 * rev_string - function that reverses a string.
 * Description: function that reverses a string.
 * @s: working with s
 */


void rev_string(char *s)
{
	if  (s == NULL)
		return;

	int length = 0;
	char *start = s;
	char *end = s;

	while (*end != '\0')
	{
		length++;
		end++;
	}
	end--;

	while (start < end)
	{
		char tmp = *start;

		*start = *end;
		*end = *tmp;

		start++;
		end--;
	}
}
