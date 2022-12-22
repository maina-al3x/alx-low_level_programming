#include "main.h"

/**
 * swap_int - function that swaps the values of two integers
 * @a: this is the first int
 * @b: this is the second int to be entered
 */

void swap_int(int *a, int *b)
{
	int changed;

	changed = *a;
	*a = *b;
	*b = changed;
}
