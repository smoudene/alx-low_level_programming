#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Print alphabets in lowercase
 *
 * Return:  0 
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		putchar(alpha);
		printf("\n");

	return (0);
}
