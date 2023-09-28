#include "main.h"

/**
  * flip_bits - function that returns the
  * number of bits you would need to flip to
  * get from one number to another.
  * @n: the first number
  * @m: the second number
  * Return: number of flipped bits
  */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int exclusive = n ^ m;
unsigned int count = 0;

while (exclusive)
{
	if (exclusive & 1ul)
		count++;
	exclusive = exclusive >> 1;
}
return (count);
}

