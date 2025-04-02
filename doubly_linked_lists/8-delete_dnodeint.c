#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at a given index.
 * @head: Double pointer to the head of the list.
 * @index: The index of the node to be deleted.
 *
 * Return: 1 if the operation was successful, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int i = 0;

	if (!*head)
		return (-1);

	if (index == 0)
	{
		*head = temp->next;
		if (*head)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	if (!temp)
		return (-1);

	if (temp->next)
		temp->next->prev = temp->prev;
	if (temp->prev)
		temp->prev->next = temp->next;

	free(temp);
	return (1);
}
