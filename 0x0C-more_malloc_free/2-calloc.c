#include "main.h"

/**
  * _memset - function to set value to array
  * @b: replaces value
  * @n: number of bytes
  * @s: input string
  * Return: pointer
  */

char *_memset(char *s, char b, unsigned int n)
{
char *ptr = s;
while (n--)
	*s++ = b;
return (ptr);
}

/**
  * _calloc - allocates memory for an array
  * @nmemb: no of array elements
  * @size: array size
  * Return: pointer to the allocated memory.
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *a;
if (size == 0 || nmemb == 0)
	return (NULL);
a = malloc(size * nmemb);
if (a == 0)
	return (NULL);
_memset(a, 0, size * nmemb);
return (a);
}
