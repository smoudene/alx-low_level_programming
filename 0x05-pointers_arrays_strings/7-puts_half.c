#include "main.h"

/**
 * puts_half - prints half of a string
 * followed by a new line
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int i;

	i = 0;
	while (*str)
	{
		i++;
	}
	if (i % 2 == 0)
	{
		i = i / 2;
		while (str[i])
		{
			_putchar(str[i]);
			i++;
		}
	}
	else
	{
		i = (i - 1) / 2;
		while (str[i])
		{
			_putchar(str[i]);
			i++;
		}
	}
	_putchar('\n');
}

