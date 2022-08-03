#include "function_pointers.h"

/**
 * array_iterator - iterate an array
 * @array: array passed
 * @size: size of array
 * @action: function passed
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array == NULL || size < i || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
