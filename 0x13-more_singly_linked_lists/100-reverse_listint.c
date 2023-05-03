#include "lists.h"

/**
 * reverse_listint - function that reverses a linked list
 * @head: head that points to the  pointer the first node in the list
 *
 * Return: always prints a pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *yes = NULL;
	listint_t *no = NULL;

	while (*head)
	{
		no = (*head)->next;
		(*head)->next = yes;
		yes = *head;
		*head = no;
	}

	*head = yes;

	return (*head);
}
