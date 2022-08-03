#include "3-calc.h"
/**
 *main - entry point
 *@argc: number of arguments supplied to the main
 *@argv: array of pointers which point to the arguments supplied to the main
 *
 *Return: 0 success
 */
int main(int argc, char *argv[])
{
	int r = 0;

	if (argc == 4)
	{
		r = get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3]));
		printf("%d\n", r);
	}
	else
	{
		printf("Error\n");
		exit(98);
	}

	return (0);
}
