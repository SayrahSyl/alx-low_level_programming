#include "lists.h"

/**
 * print_listint - this will prints all the elements of a linked list
 * @h:this prints the  linked list of type listint_t
 *
 * Return: number of nodes to print
 */
size_t print_listint(const listint_t *h)
{
	size_t number = 0;

	while (h)
	{
		printf("%d\n", h->n);
		number++;
		h = h->next;
	}

	return (number);
}
