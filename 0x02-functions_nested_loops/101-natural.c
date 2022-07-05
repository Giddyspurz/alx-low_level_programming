#include <stdio.h>
/**
 *main - entry
 *
 *Description: prints the sum of all the multiples of 3 or 5 below 1024
 *
 *Return: 0 (success)
 */

int main(void)
{
	int i, sum;

	sum = 0;
	for (i = 0; i < 1024; ++i)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			sum += i;
	}
	printf("%i\n", sum);
	return (0);
}
