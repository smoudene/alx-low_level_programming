#include "main.h"

/**
 * binary_to_uint - convert a binary number to an unsigned int.
 * @b: is pointing to a string of 0 and 1 chars
 * Return: the converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int val = 0;

	if (b == NULL)
		return (0);
	while (*b != '\0')
	{
		val = val << 1;
		if (*b != '1' && *b != '0')
			return (0);
		else if (*b == '1')
			val = val | 1;
		b++;
	}
	return (val);
}
