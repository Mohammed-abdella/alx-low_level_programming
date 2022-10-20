#include <stdio.h>
#include "lists.h"
/**
 * list_len - to get number of elements of a list
 * @a: pointer to the list
 * Return: the number of nodes in the list a
*/
size_t list_len(const list_t *a)
{
	size_t n = 0;

	while (a)
	{
		n++;
		a = a->next;
	}
	return (n);
}
