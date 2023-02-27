#include "main.h"

/**
* _strlen - The lenght of a string
* @s: String
* Return: string lenght
*/
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}
