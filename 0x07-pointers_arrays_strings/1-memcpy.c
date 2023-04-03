#include "main.h"

/**
 * *_memcpy - function copies n src to  dest
 * @dest: destination pointer
 * @src: source pointer
 * @n: size to be copied
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int nn = n;

	while (i < nn && src[i] != '\0')
	{
		dest[i] =  src[i];
		i++;
	}

	return (dest);
}
