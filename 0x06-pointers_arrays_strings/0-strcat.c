#include "main.h"

/**
 * *_strcat - concat twho strings
 *
 * @dest: pointer destination
 * @src: pointer source
 * Return: the twho strings together
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
