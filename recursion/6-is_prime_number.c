#include "main.h"

/**
 *
 *
 *
 */

int prime(int n, int d)
{
	if (n == d)
		return (1);
	if (n % d == 0)
		return (0);
	return (prime(n, d + 1));

}

/**
 *
 *
 *
 */

int is_prime_number(int n)
{
	int d = 3;

	if (n % 2 == 0 || n < 2)
		return (0);
	else if (n == 2)
		return (1);

	return (prime(n, d));
}
