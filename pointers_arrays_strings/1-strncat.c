#include "main.h"

/**
 *_strncat- function that concatenates two strings
 *@dest: the string that will append to src.
 *@src: the second string
 *@n: bytes from src
 *Return: concatenated strings
 */

char *_strncat(char *dest, char *src, int n)
{
	int length;
	int counter = 0;
	int dest_length = 0;

	while (src[counter] != '\0')
	{
		counter++;
	}

	while (dest[dest_length] != '\0')
	{
		dest_length++;
	}

	for (length = 0; src[length] && length < n; length++)
	{
		dest[dest_length] = src[length];
		dest_length++;
	}
	return (dest);
}
