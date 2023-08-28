#include "main.h"

/**
  * _memcpy - function that copies memory area
  * @dest: destination string
  * @src: source string to be copied
  * @n: number of bytes which will be copied
  * Return: *dest
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
