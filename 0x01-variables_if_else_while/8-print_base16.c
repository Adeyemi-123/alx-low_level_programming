#include <stdio.h>

/**
 * main - Entry point
 * Description:'Lowercase of hexadecimal'
 * Return: Always 0
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar('0' + i);

	for (i = 0; i < 6; i++)
		putchar('a' + i);

	putchar('\n');
	return (0);
}
