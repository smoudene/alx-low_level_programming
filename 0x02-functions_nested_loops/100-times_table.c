#include "main.h"
#include <stdio.h>
/**
 * print_times_table -  a function that prints the n times table, starting with 0
 * i = row, j = column, d = digits
 * @n: number input
 * Return: times table
 * add extra space past single digit
 */
void print_times_table(int n)
{
	int i, j, r;
	char c;

	i = 0;
	c = ' ';
	if (n < 0 || n > 15)
	{
		printf("%c", c);
	}
	else
	{
		while (i <= n)
		{
			j = 0;
			while (j <= n)
			{
				r = j * i;
				printf("%d", r);
				if (j + 1 <= n)
				{
					if ((j + 1) * i < 10)
						printf(",   ");
					else if ((j + 1) * i >= 10 && (j + 1) * i < 100)
						printf(",  ");
					else if ((j + 1) * i >= 100)
						printf(", ");
				}
				j++;
			}
			printf("\n");
			i++;
		}
	}
}
