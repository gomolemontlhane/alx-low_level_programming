#include "lists.h"
#include <stdlib.h>

/**
 *delete_dnodeint_at_index - Deletes the node at index index of a dlistint_t linked list.
 *@head: Pointer to the head of the doubly linked list.
 *@index: Index of the node that should be deleted. Index starts at 0.
 *
 *Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}

	while (i < index && current != NULL)
	{
		current = current->next;
		i++;
	}

	if (current == NULL)
		return (-1); /*Index is out of bounds */

	if (current->next != NULL)
		current->next->prev = current->prev;

	if (current->prev != NULL)
		current->prev->next = current->next;

	free(current);
	return (1);
}
