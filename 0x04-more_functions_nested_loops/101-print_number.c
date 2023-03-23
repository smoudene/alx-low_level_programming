#include "main.h"

/**
 * print_number - print an int numbers.
 * @n: number tested
 * Return: Always 0.
 */
void print_number(int n)
{
	unsigned int nb;
	
	nb = n;
	if (n < 0)
	{
		_putchar('-');
		nb = -n;
	}
	if (nb > 9)
	{
		_putnbr(nb / 10);
		_putnbr(nb % 10);
	}
	else
		_putchar(nb + '0');
}
