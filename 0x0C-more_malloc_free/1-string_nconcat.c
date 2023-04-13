#include "main.h"

/**
* string_nconcat - Concat n chars from s1 to s2
* @s1: first string.
* @s2: second string.
* @n: The maximum number of bytes of s2 to concatenate to s1.
*
* Return: NULL or pointer to allocated memory
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int l = n, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		l++;

	s = malloc(sizeof(char) * (l + 1));

	if (s == NULL)
		return (NULL);

	l = 0;

	for (i = 0; s1[i]; i++)
	{
		s[l++] = s1[i];
	}

	for (i = 0; s2[i] && i < n; i++)
	{
		s[l++] = s2[i];
	}

	s[l] = '\0';

	return (s);
}
