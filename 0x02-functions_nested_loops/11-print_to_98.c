#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - natural numbers
 *@n: our natural number
 */

void print_to_98(int n)
{
	while (n < 98)
		printf("%d, ", n);
	n++;
}
