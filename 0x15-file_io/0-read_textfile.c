#include "main.h"

/**
 * read_textfile - read a text file and print it
 * @filename: pointer
 * @letters: letters size
 * Return: 0 or num of letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t f, lett, wr;
	char *txt;

	txt = malloc(letters);
	if (txt == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	f = open(filename, O_RDONLY);

	if (f == -1)
	{
		free(txt);
		return (0);
	}

	lett = read(f, txt, letters);

	wr = write(STDOUT_FILENO, txt, lett);

	close(f);

	return (wr);
}
