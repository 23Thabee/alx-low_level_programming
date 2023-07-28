#include "lists.h"

/**
 * free_list - frees memory allocated to the list
 *
 * @head: starting node of the list
 *
 * Return: no return value
 */
void free_list(list_t *head)
{
	list_t *ptr = head;
	list_t *next;

	while (ptr != NULL)
	{
		next = ptr->next;
		free(ptr->str);
		free(ptr);
		ptr = next;
	}
	head = NULL;
}
