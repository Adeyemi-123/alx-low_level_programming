#include "function_pointers.h"
#include <stddef.h>
#include <stdio.h>

/**
 * array_iterator - function that executes a function given as a parameter
 * on each element of an array.
 * @array: the array to work on
 * @size: the size of the array
 * @action: the pointer of the array
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}

}

/**
 * print_array_iterator - a functin that prints the array
 * @num: the array to be printed
 * Return: void
 */

void print_array_iterator(int num)
{
	putchar('0' + num);
	putchar('\n');
}
