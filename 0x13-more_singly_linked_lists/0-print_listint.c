#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - function that rints all the elements
 * of a listint_t list
 * @h: pointer to the nodes
 * Return: return size of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t size = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		size++;
	}

	return (size);
}
