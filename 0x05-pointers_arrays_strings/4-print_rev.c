#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: string to be printed
 */

void print_rev(char *s)
{
	int i;

	i = 0;

	while (s[i])
	{
		i++;
	}

	while (s[i])
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
