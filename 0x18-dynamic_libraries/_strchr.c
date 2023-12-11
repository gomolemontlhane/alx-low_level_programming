#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates the first occurrence of the character c in the string s
 * @s: the string to be searched
 * @c: the character to be located
 *
 * Return: a pointer to the first occurrence of c in s, or NULL if not found
 */
char *_strchr(char *s, char c) {
    while (*s != '\0') {
        if (*s == c) {
            return (s); /* Found the character, return the pointer */
        }
        s++;
    }

    /* If the character is not found, return NULL */
    return (NULL);
}

