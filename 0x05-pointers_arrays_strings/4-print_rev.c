#include "main.h"
#include <unistd.h>

void print_rev(char *s)
{
	int i;

	i = _strlen(s) - 1;
	while (str[i])
	{
		write(1, str[i], 1);
		i--;
	}
	write(1, '\n', 1);
}

