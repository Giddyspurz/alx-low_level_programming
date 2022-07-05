#include "main.h"
/**
 *print_sign - prints the sign of a number
 *@n: the number to check its sign
 *
 *Return: 1 if the sign is +
 *        0 if n is 0
 *        -1 if the sign is -
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

