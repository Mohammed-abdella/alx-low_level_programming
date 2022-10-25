#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - to delete a node at a given index
 * @h: pointer to the list (head)
 * @idx: the index of the node to be deleted
 * Return: 1 if success or 0 if fails
*/
int delete_nodeint_at_index(listint_t **h, unsigned int idx)
{
	listint_t *a, *b;
	unsigned int i;

	b = *h;
	if (b == NULL)
		return (-1);

	if (idx == 0)
	{
		*h = (*h)->next;
		free(b);
		return (1);
	}
	for (i = 0; i < (idx - 1); i++)
	{
		if (b->next == NULL)
			return (-1);
		b = b->next;
	}
	a = b->next;
	b->next = a->next;
	free(a);

	return (1);
}
