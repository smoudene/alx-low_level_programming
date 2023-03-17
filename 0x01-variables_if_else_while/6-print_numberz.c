#include <stdio.h>
/**
 * main - Print numbers using putchar
 *
 * Return: 0
 */
int main(void)
{
	int i;

	i = '0';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
