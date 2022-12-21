#include "main.h"
/**
 * more_numbers - prints numbers 0 to 14 ten times each on new line
 *
 * Return: returns nothing
 */
void more_numbers(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			_putchar((b / 10) + '0');
			_putchar((b % 10) + '0');
		}
		_putchar(10);
	}
}
