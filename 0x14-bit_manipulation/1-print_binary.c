#include "main.h"

/**
  * print_binary - function that prints the
  * binary representation of a number
  * @n: input number
  */

void print_binary(unsigned long int n)
{
int bit = sizeof(n) * 8;
int i = 0;

while (bit)
{
	if (n & 1L << --bit)
	{
		_putchar('1');
		i++;
	}
	else if (i)
		_putchar('0');
}
if (!i)
{
	_putchar('0');
}
}


