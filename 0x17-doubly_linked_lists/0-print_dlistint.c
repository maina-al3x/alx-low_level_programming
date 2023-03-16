#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
* print_dlistint - function that prints all the elements of a dlistint_t list
* @h: the pointer to node passed from main
* Return: number of nodes in the list
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *temp = NULL;

	temp = h;
	while (temp != NULL)
	{
		printf("%i\n", temp->n);
		temp = temp->next, count++;
	}
	return (count);
}
