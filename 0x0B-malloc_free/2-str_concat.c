#include "main.h"
/**
* *str_concat - a function that concatenates two strings.
* @s1:First str
* @s2:Second str
*
* Return: NULL or concat string
*/

char *str_concat(char *s1, char *s2)
{
	char *s;
	int i;
	int j = 0;
	int lenght = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		lenght++;

	s = malloc(sizeof(char) * lenght);

	if (s == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		s[j++] = s1[i];

	for (i = 0; s2[i]; i++)
		s[j++] = s2[i];

	return (s);
}
