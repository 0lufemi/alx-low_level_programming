#include "function_pointers.h"

/**
 * int_index - Function that searches for an integer
 * @size: number of elements in the array
 * @cmp: function pointer
 * @array: the elements
 * Return: -1 if no matches
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i <= size; i++)
		{
			if ((*cmp)(array[i]))
				return (i);
		}
	}

	return (-1);
}