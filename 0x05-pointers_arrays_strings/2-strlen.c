#include "main.h"

/**
 * _strlen - calculates the size of a string
 * @s: pointer to a string
 * Return: length of a string
 */

int _strlen(char *s)
{
	int cp;

	cp = 0;
	while (*s)
	{
		cp++;
		s++;
	}
	return (cp);
}

