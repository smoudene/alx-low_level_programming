#include "main.h"

/**
 * *_strdup - returns pointer to a newly allocated space in memory,
 * @str: string given
 * Return: string given or  NULL
 */
char *_strdup(char *str)
{
	int i = 0;
	char *s;

	if (str == NULL)
		return (NULL);

	while (str[i])
		i++;

	s = (char *)malloc(sizeof(char) * i + 1);

	if (s == NULL)
		return (NULL);
	i = 0;

	while (str[i])
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}
