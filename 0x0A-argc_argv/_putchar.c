#include <stdio.h>
#include main.h

/**
 * _putchar - writes the character c to standard output
 * @c: the character to print
 *
 * Return: on sucess 1
 * On error, -1 is returned and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1))
}
