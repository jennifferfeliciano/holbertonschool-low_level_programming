#include "main.h"

/**
 *append_text_to_file- function that appends text at the end of a file
 *@filename: name of the file
 *@text_content: is the NULL terminated string to add at the end of the file
 *Return: 1 on success and -1 on failure
 */


int append_text_to_file(const char *filename, char *text_content)
{
	int fd, append_text;

	if (filename == NULL || text_content == NULL)
		return (-1);

	fd = open(filename, O_APPEND | O_RDWR);
	if (fd == -1)
		return (-1);

	append_text = write(fd, text_content, strlen(text_content));
	close(fd);

	if (append_text < 0)
		return (-1);
	else
		return (1);
}
