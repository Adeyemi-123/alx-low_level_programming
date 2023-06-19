#include <stdio.h>

/**
 * main - Entry point
 * Description: Lowercase in reverse
 * Return: Always 0
 */

int main(void)
{
	int i;

	for (i = 0; i < 26; i++)
		putchar('z' - i);

	putchar('\n');
	return (0);
}
