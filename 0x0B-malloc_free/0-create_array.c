#include "main.h"

/**
  * create_array -  function that creates an array of chars,
  * and initializes it with a specific char
  * @size: the array's size
  * @c: the initialization char
  * Return: pointer to the array
  */

char *create_array(unsigned int size, char c)
{
char *a = malloc(size);
if (size == 0 || a == 0)
return (NULL);
while (size--)
{
	a[size] = c;
}
return (a);
}
