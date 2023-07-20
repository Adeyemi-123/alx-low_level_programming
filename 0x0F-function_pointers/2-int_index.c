#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - function that searches for an integer.
 * @array: The array of integers
 * @size: the number of argument in the array
 * @cmp: The pointer to the array
 * Return: returns index otherwise -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}

/**
 * factorial - function that returns the factorial of a given number
 * @num: A random integer
 * Return: returns factorial
 */

int factorial(int num)
{
	return (num * factorial(num - 1));
}
