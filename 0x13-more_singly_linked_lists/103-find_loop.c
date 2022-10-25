#include "lists.h"

/**
 * find_listint_loop - Finds the loop contained in a linked list.
 * @head: A pointer to the head
 * Return: the address of a node starting the loop or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *a, *b;

	if (head == NULL || head->next == NULL)
		return (NULL);
	a = head->next;
	b = (head->next)->next;

	while (b)
	{
		if (a == b)
		{
			a = head;
			while (a != b)
			{
				a = a->next;
				b = b->next;
			}
			return (a);
		}
		a = a->next;
		b = (b->next)->next;
	}
	return (NULL);
}
