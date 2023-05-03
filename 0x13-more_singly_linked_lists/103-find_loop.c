#include "lists.h"

/**
 * find_listint_loop - function that finds the loop in a linked list
 * @head: headhelps to link list to search for
 *
 * Return: this is the address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *pace = head;
	listint_t *motion = head;

	if (!head)
		return (NULL);

	while (pace && motion && motion->next)
	{
		motion = motion->next->next;
		pace = pace->next;
		if (motion == pace)
		{
			pace = head;
			while (pace != motion)
			{
				pace = pace->next;
				motion = motion->next;
			}
			return (motion);
		}
	}

	return (NULL);
}
