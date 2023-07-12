#include "main.h"
#include <stdlib.h>

/**
 *_strdup- function that create a duplicate a string
 *@str: string to be duplicated
 *Return: a pointer to a duplicated string or NULL if an error occurs
 */

char *_strdup(char *str)
{
	int counter;
	char *temp;

	if (str == NULL)
		return (NULL);

	for (counter = 0; str[counter] != '\0'; counter++)
	{
	}

	temp = malloc((counter + 1) * sizeof(char));
	if (temp == NULL)
	{
		return (NULL);
	}
	for (counter = 0; str[counter] != '\0'; counter++)
	{
		temp[counter] = str[counter];
	}
	temp[counter] = '\0';
	return (temp);
}
