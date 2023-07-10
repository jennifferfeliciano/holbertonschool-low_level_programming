#include "main.h"

/**
 *find_sqrt- function that is used to calculate the square root of a number
 *@n: number to be evaluated
 *@i: current value being evaluated as a possible square root of n.
 *Return: square root of n
 */



int find_sqrt(int n, int i)
{
	if (n == (i * i))
		return (i);
	else if (n > (i * i))
		return (find_sqrt(n, i + 1));
	else
		return (-1);
}

/**
 *_sqrt_recursion- function that calculate the square root of a number
 *@n: number to be evaluated
 *Return: natural square root
 */


int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	else
		return (find_sqrt(n, 1));
}
