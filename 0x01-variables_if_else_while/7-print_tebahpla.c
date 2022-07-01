#include <stdio.h>
/**
 *main - entry
 *
 *Definition: program that prints the alphabet in lowercase in reverse
 *
 *Return: 0 (success)
 */
int main(void)
{
	int c;

	for (c = 122; c >= 97; --c)
		putchar(c);
	putchar('\n');
	return (0);
}
