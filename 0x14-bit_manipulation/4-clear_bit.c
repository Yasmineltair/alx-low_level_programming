#include "main.h"

/**
  * clear_bit - a function that sets the
  * value of a bit to 0 at a given index.
  * @n: the input number
  * @index: the index of the bit
  * Return: 1
  */

int clear_bit(unsigned long int *n, unsigned int index)
{
if (index >= sizeof(n) * 8)
{
	return (-1);
}
*n = (~(1L << index) & *n);
return (1);
}
