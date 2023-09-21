#include "main.h"

/**
 * leet - Encode a string into 1337.
 * @str: The string to encode.
 *
 * Return: A pointer to the modified string.
 */
char *leet(char *str)
{
	int i = 0;
	int j;
	char leet_table[] = "aAeEoOtTlL4433007711";

	while (str[i] != '\0')
	{
		j = 0;
		while (leet_table[j] != '\0')
		{
			if (str[i] == leet_table[j])
			{
				str[i] = leet_table[j + 10];
				break;
			}
			j++;
		}
		i++;
	}

	return (str);
}
