#include "main.h"

/**
 * create_file - create a new file
 * @filename: filename var
 * @text_content: text_content var
 * Return: 1 on success, -1 on failure, file cannot be created
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int n, c = 0;

	if (!filename)
	{
		return (-1);
	}

	if (!text_content)
	{
		fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
		if (fd == -1)
		{
			return (-1);
		}
		close(fd);
		return (1);
	}

	fd  = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
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
