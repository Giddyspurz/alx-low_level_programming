#include "main.h"
#include <stdlib.h>

/**
 * create_array - create array of chars
 * @size: size of array
 * @c: char to fill
 *
 * Return: Return char in buffer
 */
char *create_array(unsigned int size, char c)
{
	char *buff;
	unsigned int i;

	buff = malloc(size);
	if (buff == NULL || size == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		buff[i] = c;
	}

	return (buff);
}
