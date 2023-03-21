#include <main.h>

/**
 * main - print _putchar, followed by a new line.
 *
 * Return: 0
 */
int main(void)
{
	char *s = "_putchar";
	int i = 0;

	while(s[i])
	{
		_putchar(s[i]);
		i++;
	}
	return (0);
}
