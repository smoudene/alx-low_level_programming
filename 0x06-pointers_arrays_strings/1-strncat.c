#include "main.h"

/**
 * *_strncat - concat n string from src to dest
 *
 * @dest: destination pointer
 * @src: source pointer
 * @n: number of chars to be concatinated
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
		j++;
	if (j > n)
	{
		j = 0;
		while (j < n)
		{
			dest[i + j] = src[j];
			j++;
		}
		dest[i + j] = '\0';
	}
	else
	{
		j = 0;
		while (src[j] != '\0')
		{
			dest[i + j] = src[j];
			j++;
		}
		dest[i + j] = '\0';
	}

        return (dest);
}
