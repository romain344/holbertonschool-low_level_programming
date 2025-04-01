#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list_t list
 * @head: Double pointer to the first node of the list
 * @str: String to be added (duplicated)
 *
 * Return: Address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node

	if (str == NULL)
		return(NULL);

	new_mode = malloc(sizeof(list_t));
	if (new_mode == NULL)
		return(NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = strlen(str);
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
