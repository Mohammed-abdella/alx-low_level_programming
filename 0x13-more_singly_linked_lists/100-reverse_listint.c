#include "lists.h"
/**
 * reverse_listint - to reverse a given linked list
 * @h: pointer to the list (head)
 * Return: the address of the node or NULL if not exist
*/
listint_t *reverse_listint(listint_t **h)
{
	listint_t *a, *b;

	if (h == NULL || *h == NULL)
		return (NULL);
	b = NULL;
	while ((*h)->next != NULL)
	{
		a = (*h)->next;
		(*h)->next = b;
		b = *h;
		*h = a;
	}
	(*h)->next = b;
	return (*h);
}
