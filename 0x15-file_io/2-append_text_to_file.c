#include "main.h"

/**
  * append_text_to_file - function
  * that appends text at the end of a file.
  * @filename: filename
  * @text_content: text content
  * Return: 1 in success
  */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t len;
	ssize_t bytes = 0;

	if (!filename)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len]; len++)
			;
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	bytes = write(fd, text_content, len);
	if (fd == -1)
		return (-1);
	close(fd);
	return (bytes == len ? 1 : -1);
}
