#include "main.h"

/**
 * factorial - Calculates the factorial of a given number.
 * @n: The input number.
 *
 * Return: The factorial of the number, or -1 if an error occurs.
 */
int factorial(int n)
{
	if (n < 0) /* Error case: If n is lower than 0 */
		return (-1);
	if (n == 0) /* Base case: Factorial of 0 is 1 */
		return (1);
	/* Calculates factorial by multiplying n with factorial of (n - 1) */
	return (n * factorial(n - 1));
}
