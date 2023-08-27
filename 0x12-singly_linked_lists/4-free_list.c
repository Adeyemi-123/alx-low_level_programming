#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Function that frees a list_t list
 * @head: head of each node
 * Return: return (void)
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;

		free(temp->str);
		free(temp);
	}
}
