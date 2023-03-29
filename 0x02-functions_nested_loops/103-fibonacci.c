#include <stdio.h>

/**
 * main - program that finds and prints the sum of the even-valued terms
 * Return: 0
 */

int main(void)
{
	long int x = 1, y = 2, sum = 0, z;

	while (x <= 4000000)
	{
		if (x % 2 == 0)
			sum = sum + x;
		z = x + y;
		x = y;
		y = z;
	}
	printf("%lu\n", sum);
	return (0);
}
