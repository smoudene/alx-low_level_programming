#include "main.h"

/**
 * main - programs that multiplies 2 params
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success 1 on failure
 */
int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));

	return (0);
}
