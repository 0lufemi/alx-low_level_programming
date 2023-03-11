#include <stdio.h>
#include <stdlib.h>

/**
*main - Function that prints its name followed by a new line
*@argc: Argument count
*@argv: Argument variable
*Return: Always 0
*/

int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	(void)argc;

	return (0);
}
