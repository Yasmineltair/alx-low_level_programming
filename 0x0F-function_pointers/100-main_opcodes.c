#include <stdio.h>
#include <stdlib.h>

/**
  * main - the main function
  * @argc: number of arguments
  * @argv: array of arguments
  * Return: always 0
  */

int main(int argc, char **argv)
{
	char *ptr = (char *)main;
int bytes;

if (argc != 2)
printf("Error\n");
exit(1);
bytes = atoi(argv[1]);
if (bytes < 0)
printf("Error\n");
exit(2);
while (bytes--)
{
	printf("%.2x", *ptr++, bytes ? " " : "\n");
return (0);
}
