#include "lists.h"

/**
 * print_listint -this function prints all the elements of a linked list
 * @h: this will print the linked list of type listint_t
 *
 * Return: number of nodes to print
 */
size_t print_listint(const listint_t *h)
{
	size_t numbers = 0;

	while (h)
	{
		printf("%d\n", h->n);
		numbers++;
		h = h->next;
	}

	return (numbers);
}
