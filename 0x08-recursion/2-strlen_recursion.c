#include "main.h"
#include "_putchar_header.h"
/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The length of the string.
 * Return : The lenghth of the string
 */
int _strlen_recursion(char *s)
{
	int longit = 0;

	if (*s)
	{
		longit++;
		longit += _strlen_recursion(s + 1);
	}
	return (longit);
}
