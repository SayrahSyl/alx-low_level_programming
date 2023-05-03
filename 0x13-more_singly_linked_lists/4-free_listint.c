#include "lists.h"

/**
 * free_listint - function that frees a linked list
 * @head: head is defined as the listint_t list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *top;

	while (head)
	{
		top = head->next;
		free(head);
		head = top;
	}
}
