#include "main.h"

/**
* swap_int - swaps the value of 2 integers
* @a: first integer
* @b: second integer
*/

void swap_int(int *a, int *b)
{
	int q;

	q = *a;
	*a = *b;
	*b = q;
}

