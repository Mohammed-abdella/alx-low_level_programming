#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - to get the sum of data of all nodes
 * @head: the head of the linked list
 * Return: the sum to
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

