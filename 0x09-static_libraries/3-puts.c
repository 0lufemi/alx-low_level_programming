#include "main.h"

/**
* _puts - prints a string followed by new line
* @str: to be printed
* Return: ret
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*(str++));
	}
	_putchar('\n');
}
