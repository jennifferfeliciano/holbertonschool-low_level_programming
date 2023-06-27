#include "main.h"

/**
 *_strlen- calculate the length of a string
 *@s: string to be calculated
 *Return: length of the string
 */

int _strlen(char *s)
{
int counter;

for (counter = 0; s[counter] != '\0'; counter++)
	{}
return (counter);
}
