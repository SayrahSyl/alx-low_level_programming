#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes a node in a linked list
 * at a certain index
 * @head: head points to the pointer of the first element in the list
 * @index: index points to index of the node to delete
 *
 * Return: alwasy prints 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *top = *head;
	listint_t *casual = NULL;
	unsigned int s = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(top);
		return (1);
	}

	while (s < index - 1)
	{
		if (!top || !(top->next))
			return (-1);
		top = top->next;
		s++;
	}


	casual = top->next;
	top->next = casual->next;
	free(casual);

	return (1);
}
