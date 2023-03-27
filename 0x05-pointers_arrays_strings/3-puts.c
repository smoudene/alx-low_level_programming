#include "main.h"
#include "unistd.h"
/**
 * _puts - function that writes a string
 * @str: pointer to a string
 */

void _puts(char *str);
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, str[i], 1);
		i++;
	}
	write(1, '\n', 1);
}
