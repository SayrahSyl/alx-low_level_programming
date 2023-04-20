#include variadic_function.h
#include <stdio.h>

/**
 * sums_them_all - a function that returns the sum of all its parameters
 * @n: The number of param passed to the function.
 * @...: A variable number of paramters to calculate the sum of.
 * Return: If n == 0, return 0
 * else - the sum of all parameters
 */
int sum_them_all(const unsigned int n, ...);
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
