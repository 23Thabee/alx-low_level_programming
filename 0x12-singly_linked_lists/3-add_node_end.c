#include "lists.h"

/**
 * add_node_end - adds node at the end of the list
 *
 * @head: start of the list
 * @str: string or node to be added onto the list
 *
 * Return: returns the address of new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = (list_t *)malloc(sizeof(list_t *));
	list_t *last_node = (list_t *)malloc(sizeof(list_t *));

	if (new_node == NULL)
	{
		return (NULL);
	}
	last_node = *head;
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (last_node->next != NULL)
	{
		last_node = last_node->next;
	}
	last_node->next = new_node;

	return (new_node);
}
