#include "main.h"

/**
 * main - prints the name of the program
 * @argc: arguments number
 * @argv: arguments array
 *
 * Return: 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	if (argc > 0)
	{
		_puts(argv[0]);
		_puts("\n");
	}

	return (0);
}
