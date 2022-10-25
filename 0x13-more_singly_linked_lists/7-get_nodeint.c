#include "lists.h"
/**
 * get_nodeint_at_index - to get a node at the given index of a list
 * @h: pointer to the list (head)
 * @n: the index of the node
 * Return: the address of the node or NULL if not exist
*/
listint_t *get_nodeint_at_index(listint_t *h, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		if (h == NULL)
			return (NULL);
		h = h->next;
	}

	return (h);
}
