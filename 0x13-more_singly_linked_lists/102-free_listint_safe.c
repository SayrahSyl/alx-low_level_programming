#include "lists.h"

/**
 * free_listint_safe - function that frees a linked list
 * @h:head is a pointers that points to the first node in the linked list
 *
 * Return: this will print the number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t bet = 0;
	int flet;
	listint_t *top;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		flet = *h - (*h)->next;
		if (flet > 0)
		{
			top = (*h)->next;
			free(*h);
			*h = top;
			bet++;
		}
		else
		{
			free(*h);
			*h = NULL;
			bet++;
			break;
		}
	}

	*h = NULL;

	return (bet);
}
