#include "main.h"

/**
 * *leet - replace chars with numbers
 * @s: pointer
 * Return: s
 */
char *leet(char *s)
{
	char *alpha = "aAeEoOtTlL";
	char *num = "4433007711";
	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		j = 0;
		while (alpha[j])
		{
			if (s[i] == alpha[j])
			{
				s[i] = num[j];
			}
			j++;
		}
		i++;
	}
	return (s);
}
