#include "main.h"

/**
 * print_line - entry point
 *
 * Description: Prints lines
 * @n: number of lines
 * Return: void
 */

void print_line(int n)
{
	int lines;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (lines = 0; lines < n; lines++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
