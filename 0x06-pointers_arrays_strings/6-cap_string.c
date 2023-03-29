#include "main.h"

/**
 * *cap_string - function that capitalizes all words of a string.
 * @s: string
 * Return: the string
 */
char *cap_string(char *s)
{
	int i = 1;
	int j;
	char *sep = "  \n\t,.;!?)({}\"";

	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] = s[0] - 32;
	while (s[i] != '\0')
	{
		j = 0;
		while (sep[j] != '\0')
		{
			if (sep[j] == s[i - 1])
			{
				if (s[i] >= 'a' && s[i] <= 'z')
					s[i] = s[i] - 32;
			}
			j++;
		}
		i++;
	}
	return (s);
}
