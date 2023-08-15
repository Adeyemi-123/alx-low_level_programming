#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 */

int main()
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
