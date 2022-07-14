#include "main.h"

/**
 * _strncat - concatenate 2 strings
 * @dest: string to be appended to
 * @src: string to append from
 * @n: maximum bytes to concatenate
 *
 * Return: return concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (*(dest + i) != 0)
	{
		i++;
	}
	while (*(src + j) != 0 && n > 0)
	{
		dest[i] = src[j];
		j++;
		n--;
		i++;
	}

	dest[i] = '\0';

	return (dest);

}
