#include <stdio.h>

/**
 * main - Receives no arguement value
 * Return: Always 0 (Success)
 */

int main(void)
{
char c;
unsigned char C;
short s;
unsigned short S;
int i;
unsigned int I;
long l;
unsigned long L;

printf("Size of char is: %lu bytes \n", (unsigned long)sizeof(c));
printf("Size of unsigned char is: %lu bytes \n", (unsigned long)sizeof(C));
printf("Size of short is: %lu bytes \n", (unsigned long)sizeof(s));
printf("Size of unsigned short is: %lu bytes \n", (unsigned long)sizeof(S));
printf("Size of int is: %lu bytes \n", (unsigned long)sizeof(i));
printf("Size of unsigned int is: %lu bytes \n", (unsigned long)sizeof(I));
printf("Size of long is: %lu bytes \n", (unsigned long)sizeof(l));
printf("Size of unsigned long is: %lu bytes \n", (unsigned long)sizeof(L));
return (0);
}
