#include "main.h"

/**
 * _strcat - string concatenate overwriting zero byte in src
 * and then terminate with zero byte
 * @dest: string to be appended
 * @src: string to append
 *
 * Return: concatenated file
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}

	while (*(src + j) != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
