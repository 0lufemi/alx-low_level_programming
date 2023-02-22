#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - natural numbers
 *@n: our natural number
 */

void print_to_98(int n)
{
	int a, b;

	if (n <= 98)
	{
		for (a = n; a <= 98; a++)
		{
			if (i != 98)
				printf("%d, ", a);
			else
				printf("%d\n", a);
		}
	}
	else if (n >= 98)
	{
		for (b = n; b >= 98; b--)
		{
			if (b != 98)
				printf("%d, ", b);
			else
				printf("%d", b);
		}
	}
}
