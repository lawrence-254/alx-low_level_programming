#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a double linked list
 * @h: pointer to the dlistint_t
 *
 * Return: number of elements in h
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t cn = 0;

	while (h)
	{
		cn++;
		h = h->next;
	}
	return (cn);
}
