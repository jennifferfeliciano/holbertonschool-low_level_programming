#include "main.h"

/**
 *_strcmp- function that compares two strings
 *@s1: first string to be compared
 *@s2: second string to be compared
 *Return: the difference between the ASCII values of the characters
 *at the current positions of s1 and s2
 */

int _strcmp(char *s1, char *s2)
{

	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 != *s2)
		return (*s1 - *s2);

	else
		return (0);
}
