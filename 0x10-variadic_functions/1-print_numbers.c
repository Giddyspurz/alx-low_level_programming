#include "variadic_functions.h"
/**
 *print_numbers - prints numbers, followed by a new line
 *@separator: separator between numbers
 *@n: number of arguments supplied to the function
 *
 *Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int i = 0;

	va_start(num, n);
	while (i < n)
	{
		printf("%d", va_arg(num, int));
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(num);
}
