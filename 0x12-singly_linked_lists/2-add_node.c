#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - to add a node at the beginning of a list
 * @h: pointer to the list (head)
 * @str: the string to be added
 * Return: the address of the new element or NULL if fails
*/
list_t *add_node(list_t **h, const char *str)
{
	char *duplicate;
	int length;
	list_t *a;

	a = malloc(sizeof(list_t));
	if (a == NULL)
		return (NULL);

	duplicate = strdup(str);
	if (duplicate == NULL)
	{
		free(a);
		return (NULL);
	}

	for (length = 0; str[length];)
		length++;
	a->str = duplicate;
	a->len = length;
	a->next = *h;

	*h = a;

	return (a);
}
