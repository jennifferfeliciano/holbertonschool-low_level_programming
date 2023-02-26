#include "main.h"

/**
 *_abs- return an absolute value
 *@n: numbrer to check for absolute value
 *Return: absolute value of a number or 0
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		n *= -1;
		return (n);
	}
	else
	{
		return (0);
	}
}
