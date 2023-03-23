#include "main.h"
/**
 * _isupper - function to check if char is uppercase
 * @c : the char to be checked
 *
 * Return: 0 or 1
 */
int _isupper(int c)
{
	int a;

	a = 'A';

	while (a <= 'Z')
	{
		if (c == a)
		{
			return (1);
			break;
		}
		a++;
	}
	return (0);
}
