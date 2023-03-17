#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Print alphabets in lowercase
 *
 * Return -  0 
 */
int main(void)
{
	char a;

	a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	putchar('\n');

	return (0);
}
