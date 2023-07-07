#include "main.h"
#include <stdio.h>

/**
 *main- Entry point
 *@argc: argument count
 *@argv: argument vector
 *Return: all arguments it receives
 */

int main(int argc, char **argv)
{
	int counter = 0;

	for (; counter < argc; counter++)
		printf("%s\n", argv[counter]);
	return (0);
}
