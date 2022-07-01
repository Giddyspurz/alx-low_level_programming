#include <stdio.h>
/**
 *main - entry
 *
 *Description: program that prints the numbers from 00 to 99
 *
 *Return: 0 (success)
 */
int main(void)
{
	int i, j;

	for (i = 48; i <= 57; ++i)
	{
		for (j = 48; j <= 57; ++j)
		{
			putchar(i);
			putchar(j);
			if (i != 57 || j != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
