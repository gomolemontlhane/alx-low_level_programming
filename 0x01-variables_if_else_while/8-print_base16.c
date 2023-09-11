#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints all numbers of base 16 in lowercase,
 *              followed by a new line, using only putchar.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);
	}

	char letter;

	for (letter = 'a'; letter <= 'f'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
