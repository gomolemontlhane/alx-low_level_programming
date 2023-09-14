#include <main.h>

/**
 * print_alphabet_x10 - Prints alphabet 10x.
 */
void print_alphabet_x10(void)
{
	char letter;

	for (int j = 0; j < 10; j++)
	{
		letter = 'a';
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
	}
}
