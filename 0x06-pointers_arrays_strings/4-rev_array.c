#include "main.h"
#include <stdio.h>
/**
 * reverse_array - reverses the content of an array of integers.
 * @a: input integer
 * @n: number of elements of the array
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int x, y, sw;

	y = n - 1;

	for (x = 0; x < n / 2; x++)
	{
		sw = a[x];
		a[x] = a[y];
		a[y--] = sw;
	}
}
