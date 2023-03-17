#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * sum_dlistint - sum of all data integer of nodes of double linked list
 * @head: pointer to head
 * Return: sum of all data integers or 0 if empty list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
