#include <stdio.h>
/**
 *main - finds and prints the sum of the even-valued terms
 *
 *Return: 0 (success)
 */
int main(void)
{
	int i, j, sum_0, sum_1;

	i = 1;
	j = 2;
	sum_0 = sum_1 = 0;
	while (j < 4000000)
	{
		if ((j % 2) == 0)
			sum_1 = sum_1 + j;
		sum_0 = i + j;
		i = j;
		j = sum_0;
	}
	printf("%i\n", sum_1);
	return (0);
}
