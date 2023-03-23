#include "main.h"
/**
 * negative_or_positive - checks for negative or positive numbers
 *
 * @i: the number to be checked
 *
 * Return: Always 0 (success)
 */

void positive_or_negative(int i)
{
	if (i < 0)

		printf("%d is negative\n", i);
	if (i > 0)
		printf("%d is positive\n", i);
	else
		printf("%d is zero\n", i);
}
