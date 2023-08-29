#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * print_listint - function that rints all the elements
 * of a listint_t list
 * @h: pointer to the nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t size = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%d] %s", h->len, h->str);
		}

		h = h->next;
		size++;
	}
	
	return (size);
}
