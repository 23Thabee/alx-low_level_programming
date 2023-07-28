#include "lists.h"

/**
 * list_len - prints number of elements of the structure
 *
 * @h: name of a new structure member
 *
 * Return: returns number of elements
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
