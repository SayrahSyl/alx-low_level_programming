#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the node at a
 * certain index in a linked list
 * @head: the head points to the first node in the linked list
 * @index: this points to the index of the node to return
 *
 * Return: this prints pointer to the node we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int s = 0;
	listint_t *top = head;

	while (top && s < index)
	{
		top = top->next;
		s++;
	}

	return (top ? top : NULL);
}
