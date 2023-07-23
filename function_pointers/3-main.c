#include "3-calc.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 * @argc: count arguments that passed the program
 * @argv: An array og pointers to string
 * Return: an integer returned by the main function
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	op_func = get_op_func(argv[2]);

	if (op_func == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = (*get_op_func(argv[2]))(num1, num2);
	printf("%d\n", result);
	return (0);
}
