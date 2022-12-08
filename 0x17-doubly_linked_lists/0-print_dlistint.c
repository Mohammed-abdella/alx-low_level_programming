#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - a function to print elements of a list
 * @h: head pointer of the input list
 * Return: the size
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodes);
}
