#include "lists.h"

/**
 * free_listint2 - function that frees a linked list
 * @head: head points to the pointer of listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *top;

	if (head == NULL)
		return;

	while (*head)
	{
		top = (*head)->next;
		free(*head);
		*head = top;
	}

	*head = NULL;
}
