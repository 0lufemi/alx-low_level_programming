#include <stdio.h>

/**
 * main - combination of 3 digits
 *
 * Return: 0
 */

int main(void)
{
	int d1, d2, d3;

	for (d1 = '0'; d1 <= '9'; d1++)/* first digit initialization*/
	{
		for (d2 = '0'; d2 <= '9'; d2++)/* second digit init*/
		{
			for (d3 = '0'; d3 <= '9'; d3++)/* third digit init*/
			{
				if (!((d3 == d2) || (d2 == d1) ||
							(d2 > d3) || (d1 > d2)))/* remove repititionn*/
				{
					putchar(d1);
					putchar(d2);
					putchar(d3);
					if (!((d3 == '9') && (d2 == '8') && (d1 == '7')))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
