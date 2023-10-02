#include "main.h"

/**
  * _str_len - return length
  * @s: string
  * Return: length
  */

int _str_len(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (*s++)
		i++;
	return (i);
}
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
	ssize_t len = _str_len(text_content);
	ssize_t bytes = 0;

if (!filename)
	return (-1);
fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
	return (-1);
if (len)
	bytes = write(fd, text_content, len);
close(fd);
return (bytes == len ? 1 : -1);
}
