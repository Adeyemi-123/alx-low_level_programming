#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - function that concatenates all the arguments
 * @ac: size of pointer av
 * @av: pointer that contains all the argumenr
 * Return: returns pointer
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int i;
	int len;

	if (ac == 0 || av == NULL)
		return (NULL);

	len = 0;

	for (i = 0; i < ac; i++)
	{
		len += strlen(av[i]);
	}

	str = (char *)malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	str[0] = '\0';

	for (i = 0; i < ac; i++)
	{
		strcat(str, av[i]);
		strcat(str, "\n");
	}
	return (str);
}
