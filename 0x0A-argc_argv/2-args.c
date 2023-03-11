#include <stdio.h>

/**
*main - program that prints the number of arguments passed into it
*@argc: Argument count
*@argv: Argument variable
*Return: 0
*/

int main(int argc, char **argv)
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", *(argv + count));
		(*argv)++;
	}
	return (0);
}
