#include "main.h"

/**
 * main - prints arguments number
 * @argc: arguments number
 * @argv: arguments array
 *
 * Return: 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
        if (argc > 0)
                printf("%d\n", argc - 1);

        return (0);
}
