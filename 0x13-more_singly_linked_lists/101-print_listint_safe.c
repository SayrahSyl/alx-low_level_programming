#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - function that counts the number of unique nodes
 * in a looped listint_t linked list.
 * @head: head is a pointer that points to the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0. always print this
 * Otherwise - the number of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *cow, *bat;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	cow = head->next;
	bat = (head->next)->next;

	while (bat)
	{
		if (cow == bat)
		{
			cow = head;
			while (cow != bat)
			{
				nodes++;
				cow = cow->next;
				bat = bat->next;
			}

			cow = cow->next;
			while (cow != bat)
			{
				nodes++;
				cow = cow->next;
			}

			return (nodes);
		}

		cow = cow->next;
		bat = (bat->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - function that prints a listint_t list safely.
 * @head: head is a pointer that points to the head of the listint_t list.
 *
 * Return: The number of nodes in the list always.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, peak = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (peak = 0; peak < nodes; peak++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
