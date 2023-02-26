#include "main.h"

/**
 *_islower- function that checks for lowercase characters.
 *@c: character to check if it is lowercase
 *Return- 1 if the character is lowercase or 0 if it is not
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}

	return (0);
}
