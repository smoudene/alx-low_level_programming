#include "main.c"

/**
 * *_memset - fills the first n byes of s with b
 * @s: pointer to be filled
 * @b: content
 * @n: size
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	i = 0;

	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}

	return (s);
}
