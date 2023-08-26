#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list.
 * @h: h is pointer to the linked list
 * Return: returns count
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%zu] %s\n", count, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		h = h->next;
		count++;
	}
	return (count);
}
