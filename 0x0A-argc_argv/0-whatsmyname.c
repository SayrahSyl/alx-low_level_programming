#include <stdio.h>
#include "main.h"

/**
 * main - prints name of the program
 * *argv: array of argument passed to main
 * argc: word count of arguments passed to main
 *
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
		printf("%s/n", *argv);
		return (0);
}
