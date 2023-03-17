#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Print alphabets in lower and upper case
 *
 * Return - 0
 */
int main(void)
{
	char a;
	char b;

	a = 'a';
	b = 'A';

	while (a++ <= 'z')
		putchar(a);
	while (b++ <= 'Z')
		putchar(b);
	putchar('\n');

	return (0);
}
