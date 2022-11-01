

#include "main.h"

/**
 * f_exists - checks if a file exists
 * @filename: the name of the file
 * Return: returns a non-zero number if it exists and 0 otherwise
 */
int f_exists(const char *filename)
{
	struct stat buffer;

	return (stat(filename, &buffer) == 0);
}

/**
 * append_text_to_file - function to append text
 * @filename: file descriptor for filename
 * @text_content: var for the text
 * Return: 1 if success and -1 if failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int n, c = 0;

	if (!filename)
	{
		return (-1);
	}

	if (!f_exists(filename))
	{
		return (-1);
	}

	fd = open(filename, O_RDONLY | O_APPEND, 0600);
	if (fd == -1)
	{
		return (-1);
	}

	while (text_content[c])
		c++;

	n = write(fd, text_content, c);
	if (n == -1)
	{
		return (-1);
	}

	close(fd);

	return (1);
}
