#include "main.h"

/**
 * read_textfile - we want to read this text file
 * @filename: file name var
 * @letters: for the count
 * Return: the count of the letters and the contents of file
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t  n, n1;

	if (filename == -1)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}

	buf = malloc(sizeof(char) * letters);

	n = read(fd, buf, letters);

	n1 = write(STDOUT_FILENO, buf, n);
	if (n != n1)
		return (0);

	free(buf);
	close(fd);

	return (n);
}

