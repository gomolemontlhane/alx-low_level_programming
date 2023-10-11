#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: Number of command line arguments
 * @argv: Array of command line argument strings
 *
 * Return: 0 on success, 98 on wrong number of arguments,
 * 99 on invalid operator, 100 if dividing or modulo by 0
 */
int main(int argc, char *argv[])
{
	int a, b, result;
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op_func = get_op_func(argv[2]);

	if (op_func == NULL)
		return (99);

	result = op_func(a, b);
	printf("%d\n", result);

	return (0);
}
