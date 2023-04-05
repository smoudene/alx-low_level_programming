#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n : number
 * Return: the factorial of n
 */

int factorial(int n)
{
	int next_n;

	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}

	next_n = factorial(n - 1);
	return (n * next_n);
}
