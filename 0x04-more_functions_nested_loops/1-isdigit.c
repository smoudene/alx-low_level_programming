#include "main.h"

/**
 * _isdigit - check if the input is digital
 * @c: the digit to be checked
 *
 * Return: 1 or 0
 */
int _isdigit(int c)
{
	int i;

	i = 0;
	while (i < 10)
	{
		if (i == c)
		{
			return (1);
			break;
		}
		i++;
	}
	return (0);
}
