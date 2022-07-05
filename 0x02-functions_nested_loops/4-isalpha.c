#include "main.h"
/**
 *_isalpha - checks for alpabetic character
 *@c: the character to check
 *
 *Return: 1 is a letter
 *        0 otherwise
 */
int _isalpha(int c)
{
	int i;

	for (i = 'A'; i <= 'Z'; ++i)
	{
		if (i == c)
			return (1);
	}
	for (i = 'a'; i <= 'z'; ++i)
	{
		if (i == c)
			return (1);
	}
	return (0);
}
