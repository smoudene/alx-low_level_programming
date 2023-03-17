#include <stdio.h>
/**
 * main - Print hexa numbers
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
	i = 'a';
	while (i <= 'f')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
