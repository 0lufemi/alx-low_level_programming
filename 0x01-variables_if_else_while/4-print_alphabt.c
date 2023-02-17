#include <stdio.h>

/**
 * main - prints alphabet in lower case followed by new line except e q
 *
 * Return: Always 0
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar (ch);
		}
	}
	putchar('\n');
}
