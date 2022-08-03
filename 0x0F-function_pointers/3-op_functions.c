#include "3-calc.h"
/**
 *op_add - adds two integers
 *@a: first integer
 *@b: second integer
 *
 *Return: addition of two integers
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 *op_sub - subs two integers
 *@a: first integer
 *@b: second integer
 *
 *Return: substraction of two integers
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 *op_mul - muls two integers
 *@a: first integer
 *@b: second integer
 *
 *Return: multiplication of two integers
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 *op_div - divs two integers
 *@a: first integer
 *@b: second integer
 *
 *Return: division of two integers
 */
int op_div(int a, int b)
{
	if (b != 0)
		return (a / b);
	printf("Error\n");
	exit(100);
}
/**
 *op_mod - mods two integers
 *@a: first integer
 *@b: second integer
 *
 *Return: modulo of two integers
 */
int op_mod(int a, int b)
{
	if (b != 0)
		return (a % b);
	printf("Error\n");
	exit(100);
}
