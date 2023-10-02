#include "main.h"

/**
  * read_textfile - function that reads
  * a text file and prints it
  * @filename: the file name
  * @letters: number of letters it could read and print
I  * Return: he actual number of letters it could read and print
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
char buf[READ_BUF_SIZE * 8];
ssize_t i;

if (!letters || filename == NULL)
	return (0);
fd = open(filename, O_RDONLY);
if (fd == -1)
	return (0);
i = read(fd, &buf[0], letters);
i = write(STDOUT_FILENO, &buf[0], i);
close(fd);
return (i);
}
