#include "main.h"

/**
 *_puts - prints a string followed by a new line to stdout
 *@s: the string to be printed
 */
void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}

	_putchar('\n');
}
