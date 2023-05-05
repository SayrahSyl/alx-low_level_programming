#include <stdio.h>
#include "main.h"

/**
 * flip_bits - returns number of bits to flip
 * @n: first number to flip
 * @m: second number to flip
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bits = n ^ m;
	unsigned int count = 0;

	while (bits > 0)
	{
		if (bits & 1)
			count++;
		bits >>= 1;
	}
	return (count);
}
