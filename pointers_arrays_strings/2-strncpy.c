#include "main.h"

/**
 *_strncpy-function that copy a string
 *@dest: destination string
 *@src: string to be copied
 *@n: bytes
 *Return: string copied
 */

char *_strncpy(char *dest, char *src, int n)
{
	int c = 0;

	for (; src[c] != '\0' && c < n; c++)
	{
		dest[c] = src[c];
	}
	for (; c < n; c++)
		dest[c] = '\0';
	return (dest);
}
