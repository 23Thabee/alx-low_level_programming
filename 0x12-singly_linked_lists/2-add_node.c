#include "lists.h"

/**
 * add_node - adds new nodes at the beginning of a list_t list
 *
 * @head: node at the beginning of the list
 * @str: strings to be added onto the list
 *
 * Return: returns address of the new element else NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = (list_t *)malloc(sizeof(list_t *));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
