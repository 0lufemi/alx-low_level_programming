#include "dog.h"
#include <stdio.h>

/**
 * print_dog - function that prints a struct dog
 * @d: the dog
 */

void print_dog(struct dog *d)
{
	struct dog;

	if (d == NULL)
		return;
	if ((*d).name == NULL)
		(*d).name = "(nil)";
	if ((*d).owner == NULL)
		(*d).owner = "(nil)";

	printf("Name: %s", (*d).name);
	printf("\nAge: %.6f", (*d).age);
	printf("\nOwner: %s\n", (*d).owner);
}
