#include "main.h"

/**
 *_strcpy- function that copies a string
 *@src: string to be copied
 *@dest: where string is going to be copied
 *Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int counter = 0;

	for ( ; src[counter] != '\0'; counter++)
	{
	dest[counter] = src[counter];
	}
	dest[counter++] = '\0';
	return (dest);
}
