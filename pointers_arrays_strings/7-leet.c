#include "main.h"

/**
 *leet- function that encodes a string into 1337
 *@s: string to be encoded into 1337
 *Return: encoded string
 */
char *leet(char *s)
{
	char *letters = "aAeEoOtTlL";
	char *numbers = "4433007711";
	int counter, a;

	for (counter = 0; letters[counter] != '\0'; counter++)
	{
		for (a = 0; s[a] != '\0'; a++)
		{
			if (s[a] == letters[counter])
				s[a] = numbers[counter];
		}
	}
	return (s);
}
