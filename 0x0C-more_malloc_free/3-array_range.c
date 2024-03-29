#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 * @min: int defined in main
 * @max: int defined in main
 * Return: pointer to the array
 */

int *array_range(int min, int max)
{
	int a;
	int i;
	int *ptr;
	int *tmp;

	if (min > max)
		return (NULL);
	ptr = malloc(((max - min) + 1) * sizeof(int));
	if (ptr == NULL)
	{
		return (NULL);
	}
	tmp = ptr;
	a = min;
	for (i = 0; i < ((max - min) + 1) ; i++)
	{
		*ptr = a;
		ptr++;
		a++;
	}
	ptr = tmp;
	return (ptr);
}
