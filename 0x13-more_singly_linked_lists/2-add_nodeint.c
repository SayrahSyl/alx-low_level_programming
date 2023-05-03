#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the beginning
 * of a linked list
 * @head: the pointer that points to the first node in the list
 * @n: the data that is used to insert in that new node
 *
 * Return: this is the pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *dew;

	dew = malloc(sizeof(listint_t));
	if (!dew)
		return (NULL);

	dew->n = n;
	dew->next = *head;
	*head = dew;

	return (dew);
}
