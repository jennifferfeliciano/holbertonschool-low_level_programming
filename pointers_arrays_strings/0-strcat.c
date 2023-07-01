#include "main.h"
#include <stdio.h>
/**
 *_strcat- function that concatenates two strings
 *@dest: first string to be concatenated
 *@src: second string to be concatenated
 *Return: pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	char *counter = dest;

	for (; *counter != '\0'; counter++)
	{
	}
	for (; *src != '\0'; src++, counter++)
		*counter = *src;
	*counter = '\0';
return (dest);
}
