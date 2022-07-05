#include "main.h"
/**
 *jack_bauer - prints every minute of the day of Jack Bauer
 *
 *Return: void
 */
void jack_bauer(void)
{
	int i, j, r;

	for (i = 0; i <= 23; ++i)
	{
		for (j = 0; j <= 59; ++j)
		{
			r = i / 10;
			_putchar(r + '0');
			r = i % 10;
			_putchar(r + '0');
			_putchar(':');
			r = j / 10;
			_putchar(r + '0');
			r = j % 10;
			_putchar(r + '0');
			_putchar('\n');
		}
	}
}
