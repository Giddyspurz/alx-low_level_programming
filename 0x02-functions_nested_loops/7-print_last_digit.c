#include <stdio.h>
#include "main.h"
/**
 *print_last_digit - prints the last digits of a number
 *@n: the digit to print its last digit
 *
 *Return: ld the value of the last digit
 */
int print_last_digit(int n)
{
	int ld = n % 10;

	if (ld < 0)
		ld = 0 - ld;
	_putchar(ld + '0');
	return (ld);
}
