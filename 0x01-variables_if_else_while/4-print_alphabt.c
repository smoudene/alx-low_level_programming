#include <stdio.h>
/**
 * main - Print alphabet except q and e
 *
 * Return: 0
 */
int main(void)
{
	char a;

	a = 'a';

	while (a <= 'z')
	{
		if (a != 'q' && a != 'e')
			putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
