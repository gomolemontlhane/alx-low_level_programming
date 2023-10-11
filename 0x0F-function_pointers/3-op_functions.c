#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - Add two numbers
 * @a: First operand
 * @b: Second operand
 *
 * Return: Sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtract two numbers
 * @a: First operand
 * @b: Second operand
 *
 * Return: Difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiply two numbers
 * @a: First operand
 * @b: Second operand
 *
 * Return: Product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divide two numbers
 * @a: First operand (numerator)
 * @b: Second operand (denominator)
 *
 * Return: Result of division of a by b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Calculate the remainder of division of two numbers
 * @a: First operand (dividend)
 * @b: Second operand (divisor)
 *
 * Return: Remainder of division of a by b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
