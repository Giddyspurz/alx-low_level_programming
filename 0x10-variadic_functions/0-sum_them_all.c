#include "variadic_functions.h"
/**
 *sum_them_all - sums of all its parameters
 *@n: number of argument supplied to the function
 *
 *Return: 0 if @n is equal to zero
 *        sum sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list num;
	int sum = 0;

	if (n == 0)
		return (0);
	va_start(num, n);
	while (i < n)
	{
		sum += va_arg(num, int);
		i++;
	}
	va_end(num);

	return (sum);
}
