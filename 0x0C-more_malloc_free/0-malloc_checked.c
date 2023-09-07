#include "main.h"

/**
  * malloc_checked - function that allocates memory
  * @b: int
  * Return:  pointer to the allocated memory
  */

void *malloc_checked(unsigned int b)
{
void *ptr = malloc(b);

	if (ptr == 0)
	exit(98);

return (ptr);
}
