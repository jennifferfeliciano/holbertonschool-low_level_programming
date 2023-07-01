#include "main.h"

/**
 *_atoi- function that convert a string to an integer
 *@s: string to be converted
 *Return: an integer
 */

int _atoi(char *s)
{
	int counter, mult = 1, sign = 1, flag = 0;
	unsigned int sum = 0;

	for (counter = 0; s[counter] != '\0'; counter++)
	{
		if (s[counter] == '-')
		{
			sign *= -1;
		}

		for (; s[counter] >= '0' && s[counter] <= '9'; counter++)
		{
			sum = (s[counter] - 48) + mult * sum;

			mult = 10;
			flag = 1;
		}

		if (flag == 1)
		{
			break;
		}
	}
	return (sum * sign);
}
