#include "main.h"

/**
 * main - programs that multiplies 2 params
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int first, second;

	if (argc != 3)
		printf("Error");
	else
		printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));

	return (0);
}
