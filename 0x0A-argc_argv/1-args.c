#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * @argc: The number of command-line arguments
 * @argv: An array containing the program command-line arguments
 *
 * Return: 0 (Success)
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	if (argc > 0)
	{
		printf("%d\n", argc - 1);
		return (0);
	}
	return (1);
}
