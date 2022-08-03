#include "3-calc.h"

/**
 * get_op_func - get operator
 * and call specidifc function
 * @s: operator
 *
 * Return: final ans
 */
int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[1].op != NULL && ops[1].op != s)
	{
		i++;
	}
	return (ops[i].f(a, b));
}
