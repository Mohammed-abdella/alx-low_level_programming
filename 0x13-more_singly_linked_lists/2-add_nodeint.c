#include "lists.h"
/**
 * add_nodeint - to add a node at the beginning of a list
 * @h: pointer to the list (head)
 * @n: the integer he node contains
 * Return: the address of the new element or NULL if fails
*/
listint_t *add_nodeint(listint_t **h, const int n)
{
	listint_t *a;

	a = malloc(sizeof(listint_t));
	if (a == NULL)
		return (NULL);

	a->n = n;
	a->next = *h;

	*h = a;

	return (a);
}
