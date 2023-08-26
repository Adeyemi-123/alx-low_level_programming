#include "lists.h"
#include <stddef.h>

/**
 * list_len - Function that returns the number of nodes
 * @h: Pointer to the nodes
 * Return: return count
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			h = h->next;
			count++;
		}
	}
	return (count);
}
