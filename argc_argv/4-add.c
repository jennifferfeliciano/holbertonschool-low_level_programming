#include <stdio.h>
#include <stdlib.h>

/**
 *main- Entry point
 *@argc: argument counter
 *@argv: argument vector
 *Return: zero if success, return 1 if there is an error
 */

int main(int argc, char *argv[])
{
	int i;
	int n;
	int result = 0;
	int c;


	if (argc <= 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		n = atoi(argv[i]);

		for (c = 0; argv[i][c] != '\0'; c++)
		{
			if (argv[i][c] < '0' || argv[i][c] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		if (n <= 0)
		{
			printf("Error\n");
			return (1);
		}
		result += n;
	}
	printf("%d\n", result);
	return (0);
}
