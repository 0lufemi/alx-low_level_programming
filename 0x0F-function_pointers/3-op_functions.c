#include "3-calc.h"

/**
 * op_add - function to add 2 integers
 * @a: first integer
 * @b: second integer
 * Return: addition value
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function to subtract 2 integers
 * @a: first integer
 * @b: second integer
 * Return: subtraction value
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function to multiply 2 integers
 * @a: first integer
 * @b: second integer
 * Return: multiplication value
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function to divide 2 integers
 * @a: first integer
 * @b: second integer
 * Return: division value
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - function to find the modulo of 2 integers
 * @a: first integer
 * @b: second integer
 * Return: modulo value
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
