#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *set_string-Sets the value of a pointer to a char to a new string.
 * @s: pointer to a pointer to a char, representing the target pointer.
 * @to:pointer to a char, representing the new string to set.
 * Return:void
 */



void set_string(char **s, char *to)
{
	if (*s != NULL)
	{
		free(*s);
	}
	*s = (char *)malloc(strlen(to) + 1);
	strcpy(*s, to);
}
