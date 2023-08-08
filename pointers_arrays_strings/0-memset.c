#include "main.h"

/**
 *_memset- function that fill memory with a constant byte
 *@s: pointer ti the memory area
 * @b: constant byte to fill with
 * @n: number of bytes of memory area to fill
 * Return: pointer to filled memory
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int counter = 0;

	for (; counter < n; counter++)
		s[counter] = b;
	return (s);
}
