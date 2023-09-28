#include "main.h"

/**
  * set_bit - function that sets the value
  * of a bit to 1 at a given index
  * @n: input number
  * @index: the index of the bit
  * Return: 1
  */

int set_bit(unsigned long int *n, unsigned int index)
{
if (index >= sizeof(n) * 8)
{
	return (-1);
}
*n = ((1L << index) | *n);
	return (1);
}
