#include <stdio.h>

/**
 * main - print alphabet in lowercase then uppercase
 *
 * Return: Always 0
 */

int main(void)
{
	char l_ch, u_ch;

	for (l_ch = 'a'; l_ch <= 'z'; l_ch++)
	{
		putchar(l_ch);
	}
	for (u_ch = 'A'; u_ch <= 'Z'; u_ch++)
	{
		putchar(u_ch);
	}
	putchar ('\n');
}

