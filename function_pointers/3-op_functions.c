#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *op_add- function that adds two integers
 *@a: first integer
 *@b: second integer
 *Return: result of the addition
 */


int op_add(int a, int b)
{
	return (a + b);
}


/**
 *op_sub- function that subtracts two integers
 *@a: first integer
 *@b: second integer
 *Return: result of the subtraction
 */

int op_sub(int a, int b)
{
	return (a - b);
}


/**
 *op_mul- function that multiplies two integers
 *@a: first integer
 *@b: second integer
 *Return: product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}


/**
*op_div- function that divides two integers
*@a: first integer
*@b: second integer
*Return: the result of the division
*/

int op_div(int a, int b)
{
	return (a / b);
}


/**
*op_mod- function that return the remainder of a division of two numbers
*@a: first integer
*@b: second integer
*Return: remainder of a division
*/

int op_mod(int a, int b)
{
	return (a % b);
}
