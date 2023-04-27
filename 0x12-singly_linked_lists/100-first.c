#include <stdio.h>
/**
* printBeforeMain - set the attribute constryctor
* that allows to run a function before main
*/
void printBeforeMain(void) __attribute__((constructor));
/**
* printBeforeMain - prints a text
*/
void printBeforeMain(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
