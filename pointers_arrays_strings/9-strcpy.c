#include "main.h"

/**
 *
 *
 *
 */

char *_strcpy(char *dest, char *src)
{
	int counter = 0;

	for ( ;src[counter] != '\0'; counter++)
	{
	dest[counter] = src[counter];
	}
	return (dest);
}
