#include "main.h"

/**
 * rot13 - perform a rot13 encoding
 * @a: string to encode
 *
 * Return: return encoded string
 */
char *rot13(char *a)
{
	int i, j;
	char b[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char c[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; b[j] != '\0'; j++)
		{
			if (a[i] == b[j])
			{
				a[i] = c[j];
				break;
			}
		}
	}

	return (a);
}

