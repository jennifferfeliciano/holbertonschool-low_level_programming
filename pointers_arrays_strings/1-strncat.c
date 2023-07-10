#include "main.h"

/**
 *_strncat- function that concatenates two strings.
 *@dest: destination string
 *@src: source string
 *@n: maximum number of characters to concatenate from the source string
 *Return: pointer to dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int length;
	int counter = 0;
	int dest_length = 0;

	for (; counter < n && src[counter] != '\0'; counter++)
	{
	}
	for (; dest[dest_length] != '\0'; dest_length++)
	{
	}
	for (length = 0; src[length] && length < n; length++)
	{
		dest[dest_length] = src[length];
		dest_length++;
	}
	return (dest);
}
