#include "main.h"

/**
  * create_file - function that creates a file.
  * @filename: the filename
  * @text_content: text content
  * Return: 1 on success
  */

int create_file(const char *filename, char *text_content)
{
int fd;
int len;
int w;

if (!filename)
	return (-1);
if (text_content != NULL)
{
	for (len  = 0; text_content[len]; len++)
		;
}
fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC | S_IRUSR | S_IWUSR);
w = write(fd, text_content, len);
	if (fd == -1 || w == -1)
	return (-1);
	close(fd);
	return (1);
}
