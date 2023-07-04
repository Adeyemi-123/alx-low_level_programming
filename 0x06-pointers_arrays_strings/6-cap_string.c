#include "main.h"

/**
 * *cap_string - function that capitalizes all words of a string.
 * @s : The string
 * Return: return s
 */

char *cap_string(char *s)
{
	int Capitalized_text = 1;
	char *current = s;

	while (*current != '\0')
	{
		if (*current >= 'a' && *current <= 'z' && Capitalized_text)
		{
			*current = *current - 'a' + 'A';
		}
		Capitalized_text = 0;

		switch (*current)
		{
			case ' ':
			case '\t':
			case '\n':
			case ',':
			case ';':
			case '.':
			case '!':
			case '?':
			case '"':
			case '(':
			case ')':
			case '{':
			case '}':
				Capitalized_text = 1;
				break;
			default:
				break;
		}
		current++;
	}
	return (s);

}
