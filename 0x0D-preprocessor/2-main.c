#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Entry point
 * Description: display the name of file
 * Return: Always (0) Success
 */

int main(void)
{
	int i;
	int len;

	i = 0;
	len = strlen(__FILE__);

	while (i < len)
	{
		putchar(__FILE__[i]);
		i++;
	}
	putchar('\n');

	return (0);
}
