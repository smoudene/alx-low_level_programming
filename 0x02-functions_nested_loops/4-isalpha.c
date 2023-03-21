#include "main.h"
/**
 * print_alphabet - function that prints the alphabet, in lowercase
 *
 * Return: Always 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <='Z'))
	{
		return (1);
	}
	else
		return (0);
}
