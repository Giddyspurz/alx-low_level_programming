#include "main.h"
/**
 *_islower - checks for lowercase character
 *@c: the character to check
 *
 *Return: 1 is lowercase
 *        0 otherwise
 */
int _islower(int c)
{
	int i;

	for (i = 'a'; i <= 'z'; ++i)
	{
		if (i == c)
			return (1);
	}
	return (0);
}
