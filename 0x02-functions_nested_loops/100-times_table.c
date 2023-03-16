#include "main.h"

/**
*print_times_table - n times table
*@n: number limit
*/

void print_times_table(int n)
{
	int i, j, mul;

	for (i = 0; i <= n; i++)
	{
		if (n >= 0 && n <= 15)
		{
			for (j = 0; j <= n; j++)
			{
				mul = i * j;
				if (j == 0)
					_putchar(mul + '0');
				else if (mul < 10 && j != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(mul + '0');
				}
				else if (mul >= 10 && mul < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((mul / 10) + '0');
					_putchar((mul % 10) + '0');
				}
				else if (mul >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((mul / 100) + '0');
					_putchar(((mul / 10) % 10) + '0');
					_putchar((mul % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
