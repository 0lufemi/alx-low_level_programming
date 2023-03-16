#include <stdio.h>

/**
 * main - first 100 fibonnacci  numbers
 * Return: 0
 */

int main(void)
{
	long int n1, n2, n3;
	int i;
	
	n1 = 1, n2 = 2;

	printf("%lu, %lu, ", n1, n2);
	for (i = 3; i <= 50; i++)
	{
		n3 = n1 + n2;

		if (i != 50)
			printf("%lu, ", n3);
		else
			printf("%lu", n3);
		n1 = n2;
		n2 = n3;
	}
	printf("\n");

	return (0);
}
