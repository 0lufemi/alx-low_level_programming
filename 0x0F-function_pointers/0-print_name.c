#include "function_pointers.h"

/**
 * print_name - function that prints a name
 * @f: function pointer
 * @name: name to be printed
 */

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
