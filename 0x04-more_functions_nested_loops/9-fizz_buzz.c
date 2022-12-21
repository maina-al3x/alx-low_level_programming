#include <stdio.h>
/**
 * main - prints the numbers from 1 to 100
 * followed by a new line
 * for multiples of three print Fizz instead of the number
 * for the multiples of five print Buzz
 * for multiples of both three and five print FizzBuzz.
 * Return: void
 */
int main(void)
{
	int a = 100;
	int i;

	i = 1;
	while (i <= a)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			if (i < a)
				printf("Buzz ");
			else
				printf("Buzz");
		}
		else
		{
			printf("%i ", i);
		}
		i++;
	}
	printf("\n");
	return (0);
}
