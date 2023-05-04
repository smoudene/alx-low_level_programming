#include "main.h"
/**
 * print_binary - print an unsigned int in binary
 *
 * @n: input long ingt
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int printbit = 1ul << 63;
	char a = '0';

	while (!(printbit & n) && printbit != 0)
		printbit = printbit >> 1;

	if (printbit == 0)
		write(1, &a, 1);

	while (printbit)
	{
		if (printbit & n)
			a = '1';
		else
			a = '0';
		write(1, &a, 1);
		printbit = printbit >> 1;
	}
}
