#include <stdio.h>
#include "lists.h"
/**
 * listint_len - to return number of elements of a list
 * @a: pointer to the list
 * Return: the number of nodes in the list a
*/
size_t listint_len(const listint_t *a)
{
	size_t n = 0;

	while (a)
	{
		n++;
		a = a->next;
	}
	return (n);
}
