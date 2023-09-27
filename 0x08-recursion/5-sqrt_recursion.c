#include "main.h"

/**
 * sqrt_recursive - Calculates the square root of a number using recursion.
 * @n: The input number.
 * @guess: The current guess for the square root.
 *
 * Return: The square root of n, or -1 if n does not have a natural square
 *         root.
 */
int sqrt_recursive(int n, int guess)
{
	int next_guess;

	if (guess * guess == n) /* Base case: Found the exact square root */
		return (guess);

	if (guess * guess > n) /* Base case: n doesn't have a natural square root */
		return (-1);

	/* Calculate the next guess */
	next_guess = guess + 1;

	return (sqrt_recursive(n, next_guess));
}

/**
 * _sqrt_recursion - Calculates the square root of a number using recursion.
 * @n: The input number.
 *
 * Return: The square root of n, or -1 if n does not have a natural square
 *         root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0) /* Error case: If n is -, it doesn't have a natural square root */
		return (-1);

	if (n == 0 || n == 1) /* Base case: 0 and 1 are their own square roots */
		return (n);

	/* Start the recursive process with an initial guess of 1 */
	return (sqrt_recursive(n, 1));
}
