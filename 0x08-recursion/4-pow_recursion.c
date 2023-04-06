#include "main.h"
/**
 * pow_recursion - returns the value of x raised to the power of 9.
 * @x: value to raise
 * @y: power to raise
 * Return: Result of the power
 *
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);
			return (x *_pow_recursion(x, y - 1));
}
