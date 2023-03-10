#include "main.h"

/**
 * _islower - check lowercase
 *@c: is character to be checked
 *Return: 1 if character is uppercase, 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
