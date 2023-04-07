#include "main.h"

/**
 * *_strstr - inds the first occurrence of needle in haystack
 * @haystack: the string to search in
 * @needle: string to search for
 * Return: the string
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j;

	while (haystack[i])
	{
		j = 0;
		while (needle[j] == haystack[i + j])
		{
			j++;
		}
		if (needle[j] == '\0')
		{
			return (haystack + i);
		}
		i++;
	}
	return ('\0');
}
