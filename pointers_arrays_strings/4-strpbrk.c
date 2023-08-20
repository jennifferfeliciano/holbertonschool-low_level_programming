#include "main.h"
#include <stddef.h>

/**
 *_strpbrk- function that searches a string for any of a set of bytes
 *@s: first string to be compared
 *@accept: second string to be compared
 *Return: pointer to the byte of the first string that matches the second one
 *or NULL if no such byte is found
 */


char *_strpbrk(char *s, char *accept)
{
	int counter, c;

	for (counter = 0; s[counter] != '\0'; counter++)
	{
		for (c = 0; accept[c] != '\0'; c++)
		{
			if (s[counter] == accept[c])
				return (s + counter);
		}
	}
	return (NULL);
}
