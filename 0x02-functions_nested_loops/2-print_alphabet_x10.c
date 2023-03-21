#include "main.h"
/**
 * print_alphabet - function that prints the alphabet, 10 times in lowercase
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
        char a;
	int i;

        a = 'a';
	i = 0;
	while (i < 10)
	{
		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
		i++;
	}
        _putchar('\n');
}
