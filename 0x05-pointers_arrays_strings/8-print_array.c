#include <stdio.h>
#include "main.h"

/**
* print_array - prints n elements of an array
* @n: number to be printed
* @a: array
*/

void print_array(int *a, int n)
{
	int t;

	for (t = 0; t < n; t++)
	{
		printf("%d", a[t]);
		if (t != n - 1)
			printf(", ");
	}
	printf("\n");
}
