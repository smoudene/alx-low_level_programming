#include "main.h"

/**
 * *_memset - fills the first n byes of s with b
 * @s: pointer to be filled
 * @b: content
 * @n: size
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
