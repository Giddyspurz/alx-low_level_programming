#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicate a string
 * @str: pointer to string
 *
 * Return: pointer to new string
 */
char *_strdup(char *str)
{
	char *dup;
	int i = 0;
	int j;

	/* return null is NULL */
	if (str == NULL)
	{
		return (NULL);
	}

	/* get length of string */
	while (*(str + i) != '\0')
	{
		i++;
	}

	/* allocate memory */
	dup = malloc(i + 1);
	if (dup == NULL)
	{
		return (NULL);
	}

	/* duplicate string */
	for (j = 0; j <= i - 1; j++)
	{
		*(dup + j) = *(str + j);
	}

	/* add null byte at end of string */
	*(dup + j + 1) = '\n';

	return (dup);
}
