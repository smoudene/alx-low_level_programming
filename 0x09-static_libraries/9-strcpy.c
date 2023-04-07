#include "main.h"

/**
 * *_strcpy - copy src to dest
 * @dest: the destination pointer
 * @src: the source pointer
 * Return: destination pointer
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
