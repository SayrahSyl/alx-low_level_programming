#include "lists.h"

/**
 * add_nodeint_end - function that adds a node at the end of a linked list
 * @head: this pointer points to the first element in the list
 * @n: n is the data to insert in the new element
 *
 * Return: this is the  pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *dew;
	listint_t *top = *head;

	dew = malloc(sizeof(listint_t));
	if (!dew)
		return (NULL);

	dew->n = n;
	dew->next = NULL;

	if (*head == NULL)
	{
		*head = dew;
		return (dew);
	}

	while (top->next)
		top = top->next;

	top->next = dew;

	return (dew);
}
