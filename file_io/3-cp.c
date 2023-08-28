#include "main.h"

/**
 *main- Entry point of the program
 *@argc: The number of command-line arguments
 *@argv: An array of strings containing the command-line arguments
 *Return: 0 on success, various error codes on failure
 */

int main(int argc, char **argv)
{
	int fd, fd_copy, close_fd, close_fd2, read_count;
	char buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	fd = open(argv[1], O_RDONLY);

	if (fd == -1)
	{	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_copy = open(argv[2], O_TRUNC | O_CREAT | O_WRONLY, 0664);

	while ((read_count = read(fd, buffer, 1024))  > 0)
	{
		if (fd_copy == -1 || (write(fd_copy, buffer, read_count) != read_count))
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (read_count == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	close_fd = close(fd);
	if (close_fd == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd), exit(100);

	close_fd2 = close(fd_copy);
	if (close_fd2 == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_copy), exit(100);

	return (0);
}
