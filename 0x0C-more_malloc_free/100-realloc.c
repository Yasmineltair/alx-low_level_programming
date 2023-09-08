#include "main.h"

/**
  * _realloc -  function that reallocates a memory block
  * @ptr: pointer to the memory previously allocated
  * @old_size: old array size
  * @new_size: new array size
  * Return: pointer to the new memort block
  */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *a;
unsigned int i;
char *ptr1;

if (new_size == old_size)
return (ptr);
if (new_size == 0 && ptr != NULL)
{
	free(ptr);
return (NULL);
}
if (ptr == NULL)
{
	return (malloc(new_size));
}
a = malloc(new_size);
if (a == NULL)
return (NULL);
ptr1 = ptr;
if (new_size < old_size)
{
	for (i = 0; i < new_size; i++)
		a[i] = ptr1[i];
}
if (new_size > old_size)
	for (i = 0; i < old_size; i++)
	a[i] = ptr1[i];

free(ptr);
return (a);
}
