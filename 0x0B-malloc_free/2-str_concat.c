#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *str_concat - a function that concatenates two strings.
 * @s1: string number 1
 * @s2: strng number 2
 * Return: NULL on failure otherwise return result
 */

char *str_concat(char *s1, char *s2)
{
	size_t length1;
	size_t length2;
	char *result;

	if (s1 == NULL)
	{
		s1 = "";
	}


	if (s2 == NULL)
	{
		s2 = "";
	}



	length1 = strlen(s1);
	length2 = strlen(s2);

	result = (char *)malloc((length1 + length2 + 1) * sizeof(char));

	if (result == NULL)
	{
		return (NULL);
	}

	strcpy(result, s1);
	strcat(result, s2);

	return (result);

}
