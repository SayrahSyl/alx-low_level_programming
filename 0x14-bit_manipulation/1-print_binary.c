#include "main.h"

/**
 * print_binary - prints the binary rep of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int jr, count = 0;
	unsigned long int current;

	for (jr = 63; jr >= 0; jr--)
	{
		current = n >> jr;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
