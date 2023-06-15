#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes a node in a doubly linked list at a certain index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;
	unsigned int count = 0;

	if (*head == NULL)
		return -1;

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(tmp);
		return (1);
	}
	while (count < index - 1)
	{
		if (!tmp || !(tmp->next))
			return (-1);
		tmp = tmp->next;
		count++;
	}
	if (!tmp)
		return (-1);

	if (!(tmp->prev))
		tmp->prev->next = tmp->next;
	if (!(tmp->next))
		tmp->next->prev = tmp->prev;

	free (tmp);
	return (1);
}
