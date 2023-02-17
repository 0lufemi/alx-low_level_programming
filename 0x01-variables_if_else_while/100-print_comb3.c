#include <stdio.h>

/**
 * main -  2 digits combination
 *
 * Return: 0
 */

int main(void)
{
	int d1, d2;

	for (d1 = '0'; d1 <= '9'; d1++)/* prints first digit */
	{
		for (d2 = '0'; d2 <= '9'; d2++)/* prints second digit */
		{
			if (!((d2 == d1) || (d1 > d2)))/* removes repitition*/
			{
				putchar(d1);
				putchar(d2);
				if (!(d2 == '9' && d1 == '8'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
