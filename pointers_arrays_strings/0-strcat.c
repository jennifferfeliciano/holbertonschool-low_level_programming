#include "main.h"

/**
 *_strcat- 
 *
 */

char *_strcat(char *dest, char *src)
{
	int counter = 0;
	int length = 0;
	int dest_length = 0;

	while (src[counter] != '\0')
	{
		counter++;
	}

	while (dest[dest_length] != '\0')
	{
		dest_length++;
	}

	for ( ; length <= counter; length++)
		
	{
		dest[dest_length] = src[length];
		dest_length++;
	}
	return (dest);
}
