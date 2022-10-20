#include <stdio.h>
#include "lists.h"
/**
 * print_list - to print all elements of a list
 * @a: pointer to the list
 * Return: the number of nodes in the list a
*/
size_t print_list(const list_t *a)
{
	size_t n = 0;

	while (a)
	{
		if (a->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", a->len, a->str);
		n++;
		a = a->next;
	}
	return (n);
}
