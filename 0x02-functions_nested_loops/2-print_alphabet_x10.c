#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10 times
 */

void print_alphabet_x10(void)
{
	int l = 0;
	char a;

	while (l < 10)
	{
		a = 'a';
		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
	}
	l++;
	_putchar('\n');
}
