#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - Frees a listint list and sets the head to NULL
 * @head: Pointer to a pointer to the head of the list.
 */

void free_listint2(listint_t **head)
{
	listint_t *current, *temp;

	if (head == NULL)
		return;

	current = *head;

	while (current != NULL)
	{
		temp = current->next;
		free(current);
		current = temp;
	}

	*head = NULL;
}
