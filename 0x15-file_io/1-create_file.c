#include "main.h"

/**
  * _strlen - function gets length
  * @s: string
  * Return: length
  */

int _strlen(char *s)
{
int i = 0;

if (!s)
	return (0);
while (*s++)
	i++;
	return (i);
}
/**
  * create_file - function that creates a file.
  * @filename: the filename
  * @text_content: text content
  * Return: 1 on success
  */

int create_file(const char *filename, char *text_content)
{
int fd;
ssize_t len = _strlen(text_content);
ssize_t bytes;

if (filename == NULL)
	return (-1);
fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
if (fd == -1)
	return (-1);
if (len)
	bytes = write(fd, text_content, len);
close(fd);
return (bytes == len ? 1 : -1);
}
