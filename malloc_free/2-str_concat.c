#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 *str_concat- function that concatenates two strings
 *@s1: first string to be concatenated
 *@s2: second string to be concatenated
 *Return: pointer to the concatenated string.
 */

char *str_concat(char *s1, char *s2)

{
	char *temp;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	temp = malloc(strlen(s1) + strlen(s2) + 1);

	if (temp == NULL)
		return (NULL);

	memcpy(temp, s1, strlen(s1));
	memcpy(temp + strlen(s1), s2, strlen(s2) + 1);

	return (temp);
}
