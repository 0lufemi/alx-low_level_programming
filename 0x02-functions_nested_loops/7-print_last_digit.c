#include "main.h"

/**
 * print_last_digit: print last digit of a number
 * @t: integer to be evaluated
 * Return: last digit
 */

int print_last_digit(int t)
{
	int d;

	d = t % 10;

	if (d < 0)
		d = -d
	_putchar(d + '0');
	return (d);
}
