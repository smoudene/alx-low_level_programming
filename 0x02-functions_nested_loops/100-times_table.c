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
	int i, j;

	i = 0;
	if (n < 0 || n > 15)
	{
		_putchar('i');
	}
	else
	{
		while (i <= n)
		{
			j = 0;
			while (j <= n)
			{
				printf("%d", j * i);
				if (j + 1 <= n)
				{
					if (j < 10)
						printf(",   ");
					else if (j >= 10)
						printf(",  ");
				}
				j++;
			}
			printf("\n");
			i++;
		}
	}
}

