#include "main.h"
#include <stdio.h>
/**
 * main - program that prints the sum of 3 5 mult
 *
 * Return: 0 or 1 or -1
 */
int main(void)
{
	int i, s;

	i = 0;
	s = 0;
	while (i < 1024)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			s = s + i;
		}
		i++;
	}
	printf("%d\n", s);
}
