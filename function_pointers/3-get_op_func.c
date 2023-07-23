#include "3-calc.h"
#include <stddef.h>


/**
 *get_op_func- Function that selects arithmetic
 *operations based on the input operator.
 *@s: pointer to a character in the array, representing an operator
 *Return: pointer to a function that takes two integers as
 *arguments and returns an integer.
 */


int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i = 0;

	while (ops[i].op != NULL)
	{
		if (*s == *ops[i].op)
			return (ops[i].f);
		i++;
	}
	return (NULL);


}
