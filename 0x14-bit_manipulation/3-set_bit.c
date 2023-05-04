#include "main.h"
/**
 * set_bit - set te value of bit to 1
 * @n: input
 * @index: index
 * Return: -1 or 1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = *n | 1ul << index;
	return (1);
}
