#include "main.h"
#include <stdio.h>
/**
 * infinite_add - adds two numbers
 * @n1: number one.
 * @n2: number two.
 * @r: buffer that the function will use to store the result.
 * @size_r: buffer size:
 * Return: the pointer to dest.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int c1 = 0, c2 = 0, m, n, p1, p2, add = 0;

	while (*(n1 + c1) != '\0')
		c1++;
	while (*(n2 + c2) != '\0')
		c2++;
	if (c1 >= c2)
		n = c1;
	else
		n = c2;
	if (size_r <= n + 1)
		return (0);
	r[n + 1] = '\0';
	c1--, c2--, size_r--;
	p1 = *(n1 + c1) - 48, p2 = *(n2 + c2) - 48;
	while (n >= 0)
	{
		m = p1 + p2 + add;
		if (m >= 10)
			add = m / 10;
		else
			add = 0;
		if (m > 0)
			*(r + n) = (m % 10) + 48;
		else
			*(r + n) = '0';
		if (c1 > 0)
			c1--, p1 = *(n1 + c1) - 48;
		else
			p1 = 0;
		if (c2 > 0)
			c2--, p2 = *(n2 + c2) - 48;
		else
			p2 = 0;
		n--, size_r--;
	}
	if (*(r) == '0')
		return (r + 1);
	else
		return (r);
}
