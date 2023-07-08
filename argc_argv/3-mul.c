#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *main- Entry point
 *@argc: argument counter
 *@argv: argument vector
 *Return: zero if success, return 1 if there is an error
 */

int main(int argc, char **argv)
{
	int first_number, second_number, mult;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}

	else if (argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	first_number = atoi(argv[1]);
	second_number = atoi(argv[2]);
	mult = (first_number * second_number);

	printf("%d\n", mult);

	return (0);
}
