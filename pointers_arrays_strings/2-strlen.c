#include "main.h"

/**
 *_strlen- function that return the length of a string
 *@s: the string to check for the length
 *Return: string length value
 */

int _strlen(char *s)
{
	int counter = 0;

	while (*s != '\0')
	{
	s++;
	counter++;
	}
	return (counter);
}
