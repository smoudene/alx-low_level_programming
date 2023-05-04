#include "main.h"
/**
 * clear_bit - clear the value of a bit to 1 at a given index.
 * @index: index starting from 0
 * @n: number input.
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)

{
	int b;

	if (index > 63)
		return (-1);
	b = 1 << index;
	*n = *n & (~b);
	return (1);
}
