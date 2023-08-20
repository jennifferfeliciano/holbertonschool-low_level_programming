#include "main.h"
#include <stdio.h>

/**
 *_strstr- function that searshes for a substring in a string
 *@haystack: mainstring
 *@needle:substring
 *Return: pointer to the first ocurrance of needle in haystacks or Null
 */

char *_strstr(char *haystack, char *needle)
{
	char *new_haystack, *new_needle;

	if (*needle == '\0')
	{
		return (haystack);
	}

	for (; *haystack; haystack++)
	{
		new_haystack = haystack;
		new_needle = needle;

		while (*new_needle && *new_haystack && (*new_needle == *new_haystack))
		{
			new_needle++;
			new_haystack++;
		}

		if (*new_needle == '\0')
		{
			return (haystack);
		}
	}
	return (NULL);
}

