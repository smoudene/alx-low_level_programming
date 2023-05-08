#include "main.h"

/**
 * create_file - creates a file
 * @filename: pointer
 * @text_content: cntent
 * Return: 1 or -1
 */

int create_file(const char *filename, char *text_content)
{
	int i = 0, f;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";


	while (text_content[i] != '\0')
	{
		i++;
	}

	f = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (f == -1)
		return (-1);

	write(f, text_content, i);

	return (1);
}
