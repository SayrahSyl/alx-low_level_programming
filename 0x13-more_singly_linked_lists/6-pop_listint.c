#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a linked list
 * @head: head points to the pointer of the first element in the linked list
 *
 * Return: this returns the data inside the elements that was deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *top;
	int number;

	if (!head || !*head)
		return (0);

	number = (*head)->n;
	top = (*head)->next;
	free(*head);
	*head = top;

	return (number);
}
