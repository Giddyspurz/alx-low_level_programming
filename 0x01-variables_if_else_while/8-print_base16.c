#include <stdio.h>
/**
 *main - entry
 *
 *Description: program that prints all the numbers of base 16 in lowercase
 *
 *Return: 0 (success)
 */
int main(void)
{
	int d;

	for (d = 48; d <= 57; ++d)
		putchar(d);
	for (d = 97; d <= 102; ++d)
		putchar(d);
	putchar('\n');
	return (0);
}
