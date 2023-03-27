#include "main.h"
#include <unistd.h>

void print_rev(char *s)
{
	int i;

	i = _strlen(s) - 1;
	while (s[i])
	{
		write(1, s[i], 1);
		i--;
	}
	write(1, "\n", 1);
}

