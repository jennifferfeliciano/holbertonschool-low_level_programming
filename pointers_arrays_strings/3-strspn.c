#include "main.h"

/**
 *_strspn- function that gets the length of a prefix substring
 *@s: pointer to the string to be compare with accept string
 *@accept: pointer to the string to be compare with s
 *Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{

	unsigned int counter, c;

	for (counter = 0; s[counter]; counter++)
	{
		for (c = 0; accept[c]; c++)
		{
			if (s[counter] == accept[c])
			break;
		}
		if (!accept[c])
			break;
	}
	return (counter);
}
