#include "main.h"

/**
  * _memset -  function that fills memory with a constant byte.
  * @s: the string which will be filled with the bytes
  * @b: the constant byte which will fill the string
  * @n: the number of bytes which will be filled
  * Return: string s
  */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; n > 0; i++, n--)
{
s[i] = b;
}
return (s);
}
