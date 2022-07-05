#include"main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int index;
	char putchar_arr[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};

	for (index = 0; index <= 7; index++)
	{
	_putchar(putchar_arr[index]);
	}
	_putchar('\n');
	return (0);
}
