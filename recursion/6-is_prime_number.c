#include "main.h"

/**
 *prime- function to determine if a number n is prime
 *@n: number to be check
 *@d: the divisor being tested
 *Return: 1 if n is a prime number or 0 otherwise.
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
 *_is_prime_number- function that checks if prime
 *@n: number to be check
 *Return: 1 if n is a prime number or 0 otherwise.
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
