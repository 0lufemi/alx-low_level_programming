#include <stdio.h>

/**
 * main - program that finds and prints the first 98
 * Fibonacci numbers, starting with 1 and 2
 * Return: 0
 */

int main(void)
{
	long int a = 1, b = 2, c;
	int i;

	printf("%lu, %lu, ", a, b);
	for (i = 3; i <= 98; i++)
	{
		c = a + b;

		if (i != 98)
			printf("%lu, ", c);
		else
			printf("%lu", c);

		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}
