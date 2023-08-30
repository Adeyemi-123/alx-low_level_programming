#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
 * free_listint_safe - Frees a listint_t linked list safely (handles loops).
 * @h: Pointer to a pointer to the head of the list.
 * Return: Size of the list that was freed.
 */

size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *current = *h;
	listint_t *temp;

	while (current != NULL)
	{
		temp = current;
		current = current->next;

		count++;

		if (temp->next <= temp)
		{
			printf("Freeing loop node [%p] %d\n", (void *)temp, temp->n);
			free(temp);
			break;
		}

		printf("Freeing [%p] %d\n", (void *)temp, temp->n);
		free(temp);
	}

	*h = NULL;

	return (count);
}
