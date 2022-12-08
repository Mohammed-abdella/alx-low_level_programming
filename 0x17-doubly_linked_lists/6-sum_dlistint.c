#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_dlistint - to get sum of elements' integer part
 * @head: The head of the dlistint_t list
 * Return: the sum or NULL
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
