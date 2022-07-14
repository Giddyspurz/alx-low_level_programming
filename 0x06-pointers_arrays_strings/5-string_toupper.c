#include "main.h"

/**
 * string_toupper - converts lowercase to uppercase
 * @a: letters to be converted
 *
 * Return: returns converted characters
 */
char *string_toupper(char *a)
{
	int i = 0;

	while (*(a + i) != '\0')
	{
		if (*(a + i) >= 97 && *(a + i) <= 122)
		{
			*(a + i) -= 32;
		}
		i++;
	}
	return (a);
}
