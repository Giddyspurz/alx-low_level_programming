#include "main.h"
/**
 * print_number - prints an integer.
 * @n: input integer.
 * Return: void.
 */
void print_number(int n)
{
	unsigned int l, m, o;

	if (n < 0)
	{
		_putchar(45);
		l = n * -1;
	}
	else
	{
		l = n;
	}
	m = l;
	o = 1;

	while (m > 9)
	{
		m /= 10;
		o *= 10;
	}

	for (; o >= 1; o /= 10)
	{
		_putchar(((l / o) % 10) + 48);
	}
}
