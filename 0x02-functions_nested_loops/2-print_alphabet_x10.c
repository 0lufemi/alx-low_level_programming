#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10 times
 */

void print_alphabet_x10(void)
{
	int l = 0;
	int a;

	while (l < 10)
	{
		for (a = 'a'; a <= 'z'; a++)
			_putchar(a);
			_putchar('\n');
	}
	l++;

	_putchar('\n');
}
