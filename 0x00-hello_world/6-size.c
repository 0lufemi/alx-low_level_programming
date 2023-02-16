#include <stdio.h>

/**
 * main - Receives no arguement value
 * Return: Always 0 (Success)
 */

int main(void)
{
char c;
int i;
long int I;
long long int L;
float f;

printf("Size of char is: %lu bytes \n", (unsigned long)sizeof(c));
printf("Size of int is: %lu bytes \n", (unsigned long)sizeof(i));
printf("Size of long int is: %lu bytes \n", (unsigned long)sizeof(I));
printf("Size of long long int is: %lu bytes \n", (unsigned long)sizeof(L));
printf("Size of float is: %lu bytes \n", (unsigned long)sizeof(f));
return (0);
}
