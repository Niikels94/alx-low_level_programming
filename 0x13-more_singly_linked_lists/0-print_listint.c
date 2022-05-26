#include "lists.h"

/**
 * print_listint - Prints all elements of a list
 * @h: Pointer to a list
 * Return: nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	unsigned int k;

	if (h == NULL)
		return (0);
	for (k = 0; h != NULL; k++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (k);
}
