#include "main.h"

/**
  * swap_int - function that swaps the values of two integers
  * @a: the first number to be swapped
  * @b: the second number to be swapped
  * Return: void
  */

void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}
