#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Deletes the node at index of
 * a dlistint_t linked list.
 * @head: Pointer to a pointer to the head of the list
 * @index: Index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int count = 0;
	dlistint_t *temp;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = current->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}

	while (count < index - 1 && current->next != NULL)
	{
		current = current->next;
		count++;
	}

	if (current->next == NULL)
		return (-1);

	temp = current->next;
	current->next = temp->next;

	if (temp->next != NULL)
		temp->next->prev = current;

	free(temp);
	return (1);
}
