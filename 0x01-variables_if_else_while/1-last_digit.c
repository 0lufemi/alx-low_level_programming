#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints the last digit of the number
 *
 * Return: Always 0
 */

int main(void)
{
	int a, n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	a = n % 10;

	if (a > 5)
	{
		printf("The Last digit of %d is %d and is greater than 5\n", n, a);
	}
	else if (a == 0)
	{
		printf("The Last digit of %d is %d and is 0\n", n, a);
	}
	else
		printf("The Last digit of %d is %d and is less than 6 and not 0\n", n, a);
	return (0);
}
