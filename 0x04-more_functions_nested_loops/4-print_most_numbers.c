#include "man.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9
 * followed by a new line.
 *
 * Return: Always 0
 */

void print_most_numbers(void)
{
	int c;

	for (c = 48; c < 58; c++)
	{
		if (c != 50)
		{
			if (c != 52)
			{
				_putchar(c);
			}
		}
	}
	_putchar('\n');
}
