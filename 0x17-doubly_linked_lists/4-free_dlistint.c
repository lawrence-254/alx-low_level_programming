#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list
 * @head: list to be freed
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
