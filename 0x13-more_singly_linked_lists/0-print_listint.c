#include <stdio.h>
#include "lists.h"
/**
 * print_listint - to print all elements of a list
 * @a: pointer to the list
 * Return: the number of nodes in the list a
*/
size_t print_listint(const listint_t *a)
{
	size_t n = 0;

	while (a)
	{
		n++;
		printf("%d\n", a->n);
		a = a->next;
	}
	return (n);
}
