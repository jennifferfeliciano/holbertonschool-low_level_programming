#include "main.h"

/**
 *cap_string- function that capitalizes all words of a string
 *@s: string to be capitalized
 *Return: capitalized string
 */

char *cap_string(char *s)
{
	int c;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (c == 0 && (s[c] >= 'a' && s[c] <= 'z'))
		{
			s[c] -= 32;
		}
		else if (s[c] == ' ' || s[c] == '\t' || s[c] == '\n')
		{
			if (s[c + 1] >= 'a' && s[c + 1] <= 'z')
			{
				s[c + 1] -= 32;
			}
		}
		else if (s[c] == '"' || s[c] == '?' || s[c] == '!' || s[c] == ';')
		{
			if (s[c + 1] >= 'a' && s[c + 1] <= 'z')
			{
				s[c + 1] -= 32;
			}
		}
		else if (s[c] == '{' || s[c] == ')' || s[c] == '(' || s[c] == '.')
		{
			if (s[c + 1] >= 'a' && s[c + 1] <= 'z')
			{
				s[c + 1] -= 32;
			}
		}
		else if (s[c] == ',' || s[c - 1] == '}')
		{
			if (s[c + 1] >= 'a' && s[c + 1] <= 'z')
			{
				s[c + 1] -= 32;
			}
		}
	}
	return (s);
}
