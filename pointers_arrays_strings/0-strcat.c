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
	int a = 0;

	for (; dest[a] != '\0'; a++)
	{
	}
	for (; *src != '\0'; src++, a++)
		dest[a] = *src;
	dest[a] = '\0';
return (dest);
}
