#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - tells if an integer is a prime number or not
 * @n: number to evaluate
 *
 * Return: 1 if it is a prime number, 0 if its not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - calculates if a number is a prime recursively
 * @n: the number to evaluate
 * @i: iterator
 *
 * Return: 1 if n is a prime, 0 if its not.
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
