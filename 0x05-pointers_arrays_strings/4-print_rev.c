#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: string to be printed
 */

void print_rev(char *s)
{
	int i;

	i = _strlen(s) - 1;
	while (s[i])
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}

