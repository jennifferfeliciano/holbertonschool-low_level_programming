#include "main.h"

/**
 *_memcpy- function that copy memory area from src to dest
 *@dest: pointer to the destination pointer
 *@src: pointer to the source memory
 *@n: numer of bytes to be copied
 *Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int counter = 0;

	for (; counter < n; counter++)
		dest[counter] = src[counter];
	return (dest);

}
