#include "main.h"

/**
 *_strncpy- function that copies a string
 *@dest: pointer to string
 *@src: string to be copied
 *@n: bytes from src
 *Return: copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int counter;

	for (counter = 0; counter < n && src[counter] != '\0'; counter++)
	{
		*(dest + counter) = *(src + counter);
	}

	for (; counter < n; counter++)
	{
		*(dest + counter) = '\0';
	}
	return (dest);
}
