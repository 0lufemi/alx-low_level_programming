#include "main.h"

/**
* *_strcat - concantenate 2 strings
* @dest: pointer to destination string
* @src: pointer to source string
* Return: a pointer to resulting spring
*/

char *_strcat(char *dest, char *src)
{
int length, j;

length = 0;
while (dest[length] != '\0')
{
	length++;
}
for (j = 0; src[j] != '\0'; j++, length++)
{
	dest[length] = src[j];
}
dest[length] = '\0';
return (dest);
}
