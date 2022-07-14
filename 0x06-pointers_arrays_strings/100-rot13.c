#include "main.h"
/**
 * rot13 - encodes a string in rot13
 * @str: string to be encoded
 * Return: the resulting string
 */
char *rot13(char *str)
{
	int i, j;

	char m[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char n[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; m[j] != '\0'; j++)
		{
			if (str[i] == m[j])
			{
				str[i] = n[j];
				break;
			}
		}
	}
	return (str);
}

