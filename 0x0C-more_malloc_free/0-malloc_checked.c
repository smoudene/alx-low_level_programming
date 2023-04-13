#include "main.h"

/**
 * *malloc_checked - allocates memory using malloc.
 * @b: bytes to allocate
 *
 * Return: Pointer
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	ptr = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
