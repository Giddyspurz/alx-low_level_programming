#include "main.h"
#include <stddef.h>

/**
 * _strchr - locate a char in string
 * @s: string provided
 * @c: character to locate
 *
 * Return: return pointer to first occurence
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (1)
	{
		i = *s++;

		if (i == c)
		{
			return (s - 1);
		}
		if (i == 0)
		{
			return (NULL);
		}
	}
}
