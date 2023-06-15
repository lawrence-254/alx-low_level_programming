#include "lists.h"
/**
 * print_dlistint - prints all the elements of a double linked list
 * @h: pointer to the list_t list to print
 *
 * Return: the number of nodes printed
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t cn = 0;

	while (h)
	{
		if (!h->n)
		{
			printf("[0] (nil)\n");
		}
		else
			printf("%d\n", h->n);
		h = h->next;
		cn++;
	}
	return (cn);
}
