#include "function_pointers.h"
/**
 *array_iterator - executes a function given as a parameter on each element of
 *an array
 *@array: array
 *@size: length of the array
 *@action: function given as a parameter
 *
 *Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array && size && action)
		while (i < size)
		{
			action(array[i]);
			i++;
		}
}
