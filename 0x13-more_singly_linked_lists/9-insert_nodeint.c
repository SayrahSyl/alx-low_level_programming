#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node in a linked list,
 * at a given position
 * @head: head points to the pointer to the first node in the list
 * @idx: this points to index where the new node is added
 * @n: n is the data to insert in the new node
 *
 * Return: this prints pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int s;
	listint_t *dew;
	listint_t *top = *head;

	dew = malloc(sizeof(listint_t));
	if (!dew || !head)
		return (NULL);

	dew->n = n;
	dew->next = NULL;

	if (idx == 0)
	{
		dew->next = *head;
		*head = dew;
		return (dew);
	}

	for (s = 0; top && s < idx; s++)
	{
		if (s == idx - 1)
		{
			dew->next = top->next;
			top->next = dew;
			return (dew);
		}
		else
			top = top->next;
	}

	return (NULL);
}
