#include "function_pointers.h"

/**
 * int_index - returns index of first element
 * where cmp != 0
 * @array: array passed
 * @size: no of elements in array
 * @cmp: pointer to function
 * used to compare values
 *
 * Return: index of first element where cmp
 * !=0
 *
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]) == 1)
		{
			return (i);
		}
	}

	return (-1);
}
