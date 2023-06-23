#include "main.h"

/**
 *_abs- Computes the absolite value of an integer
 *@i: integer to be evaluated
 *Return: absolute value of an integer
 */

int _abs(int i)
{
	if (i < 0)
	{
		i *= -1;
	}
	return (i);
}
