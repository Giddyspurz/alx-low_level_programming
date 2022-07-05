#include "main.h"
/**
 *print_alphabet - prints the alphabet in lowercase
 *
 *Description: description
 *
 *Return: void
 */
void print_alphabet(void)
{
	int i;

	i = 'a';
	while (i <= 'z')
	{
		_putchar(i);
		++i;
	}
	_putchar('\n');
}
