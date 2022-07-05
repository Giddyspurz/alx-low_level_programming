#include <stdio.h>
/**
 *main - entry
 *
 *Description: prints the first 50 Fibonacci numbers
 *
 *Return: 0 (success)
 */
int main(void)
{
	long int i, j, sum;
	int k;

	i = 1;
	j = 2;
	printf("%li, %li, ", i, j);
	for (k = 3; k <= 50; ++k)
	{
		sum = i + j;
		if (k != 50)
			printf("%li, ", sum);
		else
			printf("%li\n", sum);
		i = j;
		j = sum;
	}
	return (0);
}
