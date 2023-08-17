#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * int_index - Function that find the comparison for the condition of cmp
 * @array: list of elemnts to compared
 * @size: size of the array
 * @cmp: pointer and initiator of condition
 *
 * Return: return index if condition is met otherwise -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
