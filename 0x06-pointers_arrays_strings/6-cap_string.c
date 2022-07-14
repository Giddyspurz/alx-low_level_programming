#include "main.h"

/**
 * cap_string - capitalize all words of a string
 * @a: characters to be sorted for capitalization
 *
 * Return: returns capitalized words
 */
char *cap_string(char *a)
{
	int i = 0;
	int j;
	char d[] = {' ', '\t', '\n', ',', ';', '.', '!',
'?', '"', '(', ')', '{', '}'};

	while (*(a + i) != '\0')
	{
		for (j = 0; j < 13; j++)
		{
			if (*(a + i) == d[j] || i == 0)
			{
				if (*(a + i + 1) >= 97 && *(a + i + 1) <= 122)
				{
					a[i + 1] -= 32;
				}

			}
		}
		i++;
	}
	return (a);
}
