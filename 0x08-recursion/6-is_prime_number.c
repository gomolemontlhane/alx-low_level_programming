#include "main.h"

/**
 * is_prime_recursive - Helper function to check if a number is prime.
 * @n: The number to check for primality.
 * @divisor: The current divisor to check.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */
int is_prime_recursive(int n, int divisor)
{
	if (n <= 1) /* Base case: 0 and 1 are not prime */
		return (0);

	if (divisor > n / 2) /* Base case: If no divisors found, it's prime */
		return (1);

	if (n % divisor == 0) /* If n is divisible by divisor, it's not prime */
		return (0);

	/* Check the next divisor */
	return (is_prime_recursive(n, divisor + 1));
}

/**
 * is_prime_number - Checks if an input integer is a prime number.
 * @n: The integer to check.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n < 2) /* 0 and 1 are not prime numbers */
		return (0);

	/* Start checking divisors from 2 */
	return (is_prime_recursive(n, 2));
}
