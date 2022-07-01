#include <stdio.h>
/**
 *main - entry
 *
 *Description: program that prints all possible combinations of single-digit
 *numbers
 *
 *Return: 0 (success)
 */
int main(void)
{
	int d;

	d = 48;
	while (d <= 57)
	{
		putchar(d);
		if (d != 57)
		{
			putchar(',');
			putchar(' ');
		}
		++d;
	}
	putchar('\n');
	return (0);
}
