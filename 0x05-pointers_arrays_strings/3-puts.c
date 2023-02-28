#include "main.h"

/**
* _puts - prints a string followed by new line
* @str: to be printed
* Return: ret
*/

oid _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*(str++));
	}
	_putchar('\n');
}
