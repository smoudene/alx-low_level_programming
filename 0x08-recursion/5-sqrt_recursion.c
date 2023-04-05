#include "main.h"

/**
 * _sqrt - returns the square root of a number help with sqrt_recursion
 * @n: test number
 * @x: squared number
 *
 * Return: the square root of n
 */

int _sqrt(int n, int x)
{
	if (n > x / 2)
	{
		return (-1);
	}
	else if (n * n == x)
	{
		return (n);
	}
	return (_sqrt(n + 1, x));
}
/**
* _sqrt_recursion - returns the natural square root of  n
* @n: number to be used
*
* Return: the square root of n
*/

int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
		return (n);
	return (_sqrt(0, n));
}
