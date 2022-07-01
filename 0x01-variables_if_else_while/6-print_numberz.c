#include <stdio.h>
/**
 *main - entry
 *
 *Description: program that prints digits from 0 to 9
 *
 *Return: 0 (success)
 */
int main(void)
{
	int d;

	for (d = 48; d <= 57; ++d)
		putchar(d);
	putchar('\n');
	return (0);
}
