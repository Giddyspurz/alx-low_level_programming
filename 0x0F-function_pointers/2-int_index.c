#include "function_pointers.h"
/**
 *int_index - searches for an integer
 *@array: array
 *@size: length of array
 *@cmp: function given as an argument
 *
 *Return: i index of the first element that is the integer wanted
 *        -1 if @size is minor or equal than 0 or if no element matches
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && size && cmp)
		while (i < size)
		{
			if (cmp(array[i]) == 0)
				i++;
			else
				return (i);
		}

	return (-1);
}
