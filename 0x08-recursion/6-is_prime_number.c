#include "main.h"

/**
 * is_prime - check number if prime or not
 * @a: input number.
 * @b: iterator.
 * Return: 1 or 0
 */
int is_prime(int a, int b)
{
	if (a % b == 0)
	{
		if (a == b)
			return (1);
		else
			return (0);
	}
	return (0 + is_prime(a, b + 1));
}
/**
 * is_prime_number -check prime number
 * @n: input number.
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (is_prime(n, 2));
}
