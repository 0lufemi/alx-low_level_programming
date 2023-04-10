#include "main.h"

/**
 * flip_bits - returns the number of bits you
 *		would need to flip to get from one number to another
 * @n: First number
 * @m: number to flip n to
 * Return: number of bits needed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x, num_bits;

	x = n ^ m;
	num_bits = 0;

	while (x > 0)
	{
		num_bits = num_bits + (x & 1);
		x >>= 1;
	}

	return (num_bits);
}
