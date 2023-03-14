#include "main.h"
#include <stdlib.h>

/**
* create_array - creates an array of chars
* @size: size of array
* @c: stored char
* Return: pointer to the array
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *cr;

	if (size == 0)
		return (NULL);

	cr = malloc(size * sizeof(c));

	if (cr == NULL)
		return (NULL);

	while (i < size)
	{
		cr[i] = c;
		i++;
	}

	return (cr);
}
