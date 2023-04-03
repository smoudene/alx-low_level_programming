#include "main.h"

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int nn = n;

	while (i < nn && src[i] != '\0')
	{
		dest[i] =  src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
