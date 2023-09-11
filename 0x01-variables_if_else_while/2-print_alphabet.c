#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point of the program
 *
 * Description: This program prints the lowercase alphabet
 *              followed by a new line using only putchar.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter = 'a'; /* Start with the letter 'a' */

	while (letter <= 'z') /* Loop through 'a' to 'z'*/
	{
		putchar(letter); /* Print the current letter */
		letter++; /* Move to the next letter */
	}

	putchar('\n'); /* Print a newline character at the end */
	return (0);
}
