#include "lists.h"

/**
 * print_list - prints list of a structure list_t
 * @h: pointer to a string h
 *
 * Return: number of characters
 */
size_t print_list(const list_t *h)
{
	int count = 0;
	const list_t *new;

	new = h;
	while (new != NULL)
	{
		if (new->str == NULL)
		{
			printf("[0] (nil)");
		}
		else
		{
			printf("[%d] %s", new->len, new->str);
		}
		printf("\n");
		count++;
		new = new->next;
	}
	return (count);
}
