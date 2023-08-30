#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at index of listint_t linked list
 * @head: Pointer to a pointer to the head of the list
 * @index: Index of the node to be deleted.
 * Return: 1 if succeeded, -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *current;
	unsigned int count;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	current = *head;
	count = 0;

	while (current != NULL && count < index - 1)
	{
		current = current->next;
		count++;
	}

	if (current == NULL || current->next == NULL)
		return (-1);

	temp = current->next;
	current->next = temp->next;
	free(temp);

	return (1);
}
