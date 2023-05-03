#include "lists.h"

/**
 * sum_listint - function that calculates the sum of all the data
 * in a listint_t list
 * @head: the head points to the first node in the linked list
 *
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *top = head;

	while (top)
	{
		sum += top->n;
		top = top->next;
	}

	return (sum);
}
