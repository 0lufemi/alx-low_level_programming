#include <stdio.h>

/**
 * main - first 100 fibonnacci  numbers
 * Return: 0
 */
 
 int main(void)
{
	int i, n3, n1 = 1, n2 = 2;

	printf("%d, %d, ", n1, n2);
	for (i = 3; i <= 50; i++)
	{
		n3 = n1 + n2;

		if(i != 50)
			printf("%d, ", n3);
		else
			printf("%d", n3);
		n1 = n2;
		n2 = n3;
	}
	printf("\n");
}
