#include <stdio.h>
/**
 *main - entry
 *
 *Definition: program that prints the alphabet in lowercase
 *
 *Return: 0 (success)
 */
int main(void)
{
	char c;

	for (c = 97; c <= 122; ++c)
		putchar(c);
	putchar('\n');
	return (0);
}
