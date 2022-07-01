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

	for (d = 0; d < 10; ++d)
		printf("%i", d);
	putchar('\n');
	return (0);
}
