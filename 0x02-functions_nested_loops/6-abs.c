#include "main.h"
/**
 *_abs - computes the absolute value of a integer
 *@n: integer to check
 *
 *Return: n absolute value
 */
int _abs(int n)
{
	if (n < 0)
		n = n * -1;
	return (n);
}
