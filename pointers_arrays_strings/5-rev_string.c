#include "main.h"

/**
 *rev_string- function that reverse a string
 *@s: string to be reverse
 *Return: void
 */

void rev_string(char *s)
{
	int counter = 0, i;
	char temp;

	while (s[counter] != '\0')
	{
	counter++;
	}

	for (i = 0 ; i < counter / 2 ; i++)
	{
	temp = s[i];
	s[i] = s[counter - i - 1];
	s[counter - i - 1] = temp;
	}
}
