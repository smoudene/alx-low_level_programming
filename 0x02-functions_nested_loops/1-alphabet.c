#include "main.h"
/**
 * print_alphabet - function that prints the alphabet, in lowercase
 *
 * Return: Always 0
 */
void print_alphabet(void)
{
	char a;

	a = 'a';
	while (a < 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar("\n");
}

