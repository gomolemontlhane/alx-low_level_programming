#include "main.h"

/**
 * print_line - prints a straight line of underscores.
 * @n: The number of underscores to print.
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
