#include <stdio.h>
/**
 *main - entry
 *
 *Definition: program that prints the alphabet in lowercase except q and e
 *
 *Return: 0 (success)
 */
int main(void)
{
	char c;

	c = 97;
	while (c <= 122)
	{
		if (c == 'e' || c == 'q')
			;
		else
			putchar(c);
		++c;
	}
	putchar('\n');
	return (0);
}
