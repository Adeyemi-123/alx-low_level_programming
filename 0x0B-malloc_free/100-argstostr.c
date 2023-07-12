#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * *argstostr - function that concatenates all the arguments
 * @ac: size of the argument
 * @av: pointer of argument
 * Return: Returns a pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	int currentPosition;
	int argument;
	int Totalnumber;
	int i, length;
	char *result;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	Totalnumber = 0;

	for (i = 0; i < ac; i++)
	{
		length = strlen(av[i]) + 1;
		Totalnumber += length;
	}

	result = (char *)malloc((Totalnumber + 1) *  sizeof(char));
	if (result == NULL)
	{
		return (NULL);
	}

	currentPosition = 0;

	for (i = 0; i < ac; i++)
	{
		argument = strlen(av[i]);
		strcpy(result + currentPosition, av[i]);
		currentPosition += argument;
		result[currentPosition] = '\n';
		currentPosition++;

	}

	result[Totalnumber] = '\0';

	return (result);
}
