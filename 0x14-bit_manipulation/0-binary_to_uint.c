#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: ponter to 0 and 1
 *
 * Return: the converted number
 * or 0 if its not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	int jr;
	unsigned int dec_val = 0;

	if (!b)
		return (0);

	for (jr = 0; b[jr]; jr++)
	{
		if (b[jr] < '0' || b[jr] > '1')
			return (0);
		dec_val = 2 * dec_val + (b[jr] - '0');
	}

	return (dec_val);
}
