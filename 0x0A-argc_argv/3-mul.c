#include <stdio.h>
#include <stdlib.h>

/**
*main - program that multiplies 2 numbers
*@argc: argument count
*@argv: argunment vector
*Return: 0
*/

int main(int argc, char *argv[])
{
	/*
	*int a, b, mul;

	*a = atoi(argv[1]);
	*b = atoi(argv[2]);

	*mul = a * b;
	*/

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
