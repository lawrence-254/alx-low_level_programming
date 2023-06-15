#include "lists.h"

/**
 * add_dnodeint - adds a new node at the end of a double linked list
 * @head: double pointer to the dlistint_t list
 * @n: constant end pos
 *
 * Return: the address of the new element, or NULL if it fails
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *aded;
	dlistint_t *tmp = *head;
	unsigned int cn = 0;

	while (n[cn])
		cn++;
	aded = malloc(sizeof(dlistint_t));
	if(!aded)
		return (NULL);

