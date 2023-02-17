#include <stdio.h>

/**
 * main - print hexadecimal numbers
 *
 * Return: 0
 */

int main(void)
{
	int a;
	char l;

	for (a = 0; a < 10; a++)
	{
		putchar(a + '0');
	}
	for (l = 'a'; l <= 'f'; l++)
	{
		putchar(l);
	}
	putchar('\n');

	return (0);
}
