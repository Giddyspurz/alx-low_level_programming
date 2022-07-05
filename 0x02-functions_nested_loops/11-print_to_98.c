#include <stdio.h>
/**
 *print_to_98 - prints all natural numbers from n to 98
 *@n: number to print from
 *
 *Return: void
 */
void print_to_98(int n)
{
	if (n < 98)
		for (n = n; n < 98; ++n)
			printf("%i, ", n);
	else if (n > 98)
		for (n = n; n > 98; --n)
			printf("%i, ", n);
	printf("98\n");
}
