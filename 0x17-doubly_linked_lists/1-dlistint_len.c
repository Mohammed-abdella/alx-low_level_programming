#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - a function to print elements of a list
 * @h: head pointer of the input list
 * Return: the size
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
