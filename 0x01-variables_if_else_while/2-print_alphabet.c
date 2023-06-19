#include <stdio.h>

/**
 * main - Entry point
 * Description: Displays alphabets in lower case
 * Return:Always 0
 */

int main(void)
{
	int i;

	for (i = 0; i < 26; i++)


		putchar('a' + i);

	putchar('\n');
	return (0);

}
