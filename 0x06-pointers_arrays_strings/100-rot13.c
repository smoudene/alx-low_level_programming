#include "main.h"

/**
 * *rot13 - encode string using rot13
 * @s: string to be encoded
 * Return:s
 */
char *rot13(char *s)
{
	char *first = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *second = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int i = 0;
	int j;

	while (s[i])
	{
		j = 0;
		while (first[j])
		{
			if (s[i] == first[j])
			{
				s[i] = second[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (s);
}
