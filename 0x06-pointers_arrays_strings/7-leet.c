#include "main.h"

/**
 * leet - function to encode
 * @a: characters to be encoded
 *
 * Return: encoded string
 */
char *leet(char *a)
{
	int i = 0;
	int j;
	char d[] = "aAeEoOtTlL";
	char e[] = "4433007711";

	while (*(a + i) != '\0')
	{
		for (j = 0; j <= 9; j++)
		{
			if (*(a + i) == d[j])
			{
				*(a + i) = e[j];
			}
		}
		i++;
	}
	return (a);
}
