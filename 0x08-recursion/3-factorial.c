#include "main.h"

/**
*factorial - function that writes the factorial of a number
*@n: The number
*Return: Factorial of n
*/

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	return
		(n * factorial(n - 1));
}
