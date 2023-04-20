#include "variadic_functions.h"

/**
 * sum_them_all - Returns the sum of all its paramters.
 * @n: The number of paramters
 * @...: other numbers to be calculated
 *
 * Return: 0 or sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);
	while (i < n)
	{
		sum += va_arg(ap, int);
		i++;
	}
	va_end(ap);
	return (sum);
}
