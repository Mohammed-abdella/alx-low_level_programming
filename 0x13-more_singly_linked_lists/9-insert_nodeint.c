#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - to add a node at a given index
 * @h: pointer to the list (head)
 * @idx: the index where new node is to be inserted
 * @n: the integer of a node
 * Return: the address of the new node or NULL if fails
*/
listint_t *insert_nodeint_at_index(listint_t **h, unsigned int idx, int n)
{
	listint_t *a, *b;
	unsigned int i;

	b = *h;
	a = malloc(sizeof(listint_t));
	if (a == NULL)
		return (NULL);

	a->n = n;

	if (idx == 0)
	{
		a->next = b;
		*h = a;
		return (a);
	}
	for (i = 0; i < (idx - 1); i++)
	{
		if (b == NULL || b->next == NULL)
			return (NULL);
		b = b->next;
	}
	a->next = b->next;
	b->next = a;

	return (a);
}
