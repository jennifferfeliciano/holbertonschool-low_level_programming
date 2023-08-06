#include "main.h"

/**
 *string_toupper- function that change lowercase letters to uppercase
 *in a string
 *@s: pointer to the string.
 *Return: all uppercase string
 */

char *string_toupper(char *s)
{
	int counter = 0;

	for (; s[counter] != '\0'; counter++)
	{
		if (s[counter] >= 'a' && s[counter] <= 'z')
			s[counter] -= 32;
	}
	return (s);
}
