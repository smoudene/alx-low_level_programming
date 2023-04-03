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
	int o = -1;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			o = i;
			break;
		}
		i++;
	}
	if (o == -1)
		return ('\0');
	else
		return (s + o);
}
