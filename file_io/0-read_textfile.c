#include "main.h"

/**
 *read_textfile- function that read and print the content of a file
 *@filename:pointer to the name of the file to be read
 *@letters: nmmber of characters to be read
 *Return: number of bytes read an printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes_count, bytes_write;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);

	if (buf == NULL)
	{
		close(fd);
		return (0);
	}

	bytes_count = read(fd, buf, letters);

	if (bytes_count < 0)
	{
		free(buf);
		close(fd);
		return (0);
	}

	bytes_write = write(STDOUT_FILENO, buf, bytes_count);
	free(buf);
	close(fd);

	return (bytes_write);
}

