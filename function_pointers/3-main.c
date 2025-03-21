#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - performs a simple arithmetic operation
 * @argc: the number of arguments
 * @argv: the arguments passed
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
	int (*operation)(int, int);
	int a, b;
	op_t *op_struct

	if (argc != 4)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	
	p_struct = get_op_func(argv[2]);

	if (op_struct == NULL)
	{
		printf("Error\n");
		return (1);
	}

	operation = op_struct->f;

	printf("%d\n", operation(a, b));
	return (0);
}
