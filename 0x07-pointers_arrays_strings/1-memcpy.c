#include "main.h"

/**
 * _memcpy - copy memory area
 * @dest: destination area
 * @src: src area
 *@n: size to copy
 *
 * Return: destinatio pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
