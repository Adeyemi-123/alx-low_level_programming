#include <stdio.h>

/**
 * main - Entry point
 * Description: possible combinations of two two-digit numbers
 * Return: Always 0
 */

int main(void)
{
	int i, j;

	for (i = 0; i < 100; i++)
	{
		for (j = i + 1; j < 100; j++)
		{
			putchar('0' + (i / 10));
			putchar('0' + (i % 10));
			putchar(' ');

			putchar('0' + (j / 10));
			putchar('0' + (j % 10));
			if ((i / 10) != 9 || (i % 10) != 8 || (j / 10) != 9 || (j % 10) != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
