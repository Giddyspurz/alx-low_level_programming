#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - entry
 *
 *Definition: a program that prints if the last digit of random number is
 *greater than 5, equal to zero or less than 6
 *
 *Return: 0 (sucess)
 */
int main(void)
{
	int n, ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;
	if (ld > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, ld);
	else if (ld == 0)
		printf("Last digit of %i is %i and is 0\n", n, ld);
	else if (ld < 6)
		printf("Last digit of %i is %i and is less than 6 and not 0\n",
		       n, ld);
	return (0);
}
