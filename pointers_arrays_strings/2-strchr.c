#include "main.h"
#include <stddef.h>

/**
 *_strchr- function thar locate scharacter in a string
 *@s: pointer to the string
 *@c: character to be located
 *Return: pointer to the first ocurrence of c or NULL if not found
 */

char *_strchr(char *s, char c)
{
	int counter = 0;

	for (; s[counter] != '\0'; counter++)
	{
		if (s[counter] == c)

			return (&s[counter]);
	}
	return ('\0');
}
