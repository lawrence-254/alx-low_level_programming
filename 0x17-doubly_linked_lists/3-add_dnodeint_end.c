#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a double linked list
 * @head: double pointer to the list
 * @n: new node
 *
 * Return: address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp = *head;
	dlistint_t *new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	
	if (!new_node)
	{
		return NULL;
	}
	
	new_node->n = n;
	new_node->prev = NULL;
	if (*head == NULL)
	{
	new_node->next = NULL;
	*head = new_node;
	}else{
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
	tmp->next = new_node;
	new_node->prev = tmp;
	}
	return (new_node);
}
