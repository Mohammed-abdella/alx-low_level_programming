#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_nodeint_end - to add a node at the end of a list
 * @h: pointer to the list (head)
 * @n: the integer of a node
 * Return: the address of the new element or NULL if fails
*/
listint_t *add_nodeint_end(listint_t **h, const int n)
{
	listint_t *a, *b;

	a = malloc(sizeof(listint_t));
	if (a == NULL)
		return (NULL);

	a->n = n;
	a->next = NULL;

	if (*h == NULL)
		*h = a;
	else
	{
		b = *h;
		while (b->next != NULL)
			b = b->next;
		b->next = a;
	}

	return (a);
}
