#include "3-calc.h"
/**
 *get_op_func - select the correct function to perform the operation asked
 *@s: operation
 *
 *Return: i result of the operation
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].op)
	{
		if (!strcmp(ops[i].op, s))
			return (ops[i].f);
		i++;
	}
	printf("Error\n");
	exit(99);
}
