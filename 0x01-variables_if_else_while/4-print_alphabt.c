#include <stdio.h>

/**
 * main - Entry point
 * Description: Lowercase except q and e
 * Return: Always 0
 */

int main(void)
{
	int i;

	for (i = 0; i < 26; i++)
	{
		char alphabets = 'a' + i;

		if (alphabets == 'q' || alphabets == 'e')
		{
			continue;

		}
		putchar(alphabets);
	}
	putchar('\n');
	return (0);
}
