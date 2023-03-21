#include "main.h"

/**
 * main - print _putchar, followed by a new line.
 *
 * Return: 0
 */
int main(void)
{
	char *s = "_putchar";

	while (*s)
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');

	return (0);
}
