#include "main.h"
#include <stddef.h>

/**
 *_strpbrk - searches string set of bytes
 * @s: string to search
 * @accept: string with bytes to look for
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept
 *
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *s != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
		s++;
	}

	return (NULL);
}
