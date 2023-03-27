#include "main.h"

/**
 * rev_string - reverse a string
 * @s: string to be printed
 */

void rev_string(char *s)
{
	int i;

	i = 0;

	while (s[i])
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
	i--;
	while (s[i])
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
