#include "main.h"

/**
 * *create_array - create array of chars and fill it with c
 * @size: size of the array
 * @c: the char
 *
 * Return: 0 or null or filled array
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);
	array = (char *)malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	while (i < size)
	{
		array[i] = c;
		i++;
	}

	return (array);
}
