#include "main.h"

/**
 * *_strchr - Returns a pointer to the first occurrence of the character
 * @s: pointer to a string
 * @c: caracter to be checked
 * Return: pointer to the first occurence
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] >= '\0')
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	return ('\0');
}
