#include "main.h"
/**
 *print_times_table - prints the n times table, starting with 0
 *@n: number that indicates the times
 *Return: void
 */

void print_times_table(int n)
{
	int i, j;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; ++i)
		{
			_putchar(0 + '0');
			for (j = 1; j <= n; ++j)
			{
				_putchar(',');
				_putchar(' ');
				if ((i * j) < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((i * j) + '0');
				}
				else if ((i * j) < 100)
				{
					_putchar(' ');
					_putchar(((i * j) / 10) + '0');
					_putchar(((i * j) % 10) + '0');
				}
				else
				{
					_putchar(((i * j) / 100) + '0');
					_putchar((((i * j) % 100) / 10) + '0');
					_putchar(((i * j) % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
