#include <stdio.h>
/**
 * main - print alphabets in reverse
 *
 * Return: 0
 */
int main(void)
{
	char a;

	a = 'z';

	while (a >= 'a')
	{
		putchar(a);
		a--;
	}
	putchar('\n');
	return (0);
}
