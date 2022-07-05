#include <stdio.h>
/**
 *main - entry
 *
 *Description: prints the first 98 Fibonacci numbers
 *
 *Return: 0 (success)
 */
int main(void)
{
	long i, j, a, b, tail, head, sum;
	int k;

	i = 1, j = 2;
	printf("%li, %li, ", i, j);
	for (k = 3; k <= 91; ++k)
	{
		sum = i + j;
		i = j;
		j = sum;
		printf("%li, ", sum);
	}
	/**
	 *We need to split the number because it overpass the size of long int
	 */
	a = i % 10000000000;
	i = i / 10000000000;
	b = j % 10000000000;
	j = j / 10000000000;
	for (; k <= 98; ++k)
	{
		tail = a + b;
		head = i + j;
		if (tail > 10000000000)
		{
			head += 1;
			tail = tail % 10000000000;
		}
		if (k != 98)
			printf("%li%li, ", head, tail);
		else
			printf("%li%li\n", head, tail);
		i = j, j = head, a = b, b = tail;
	}
	return (0);
}
