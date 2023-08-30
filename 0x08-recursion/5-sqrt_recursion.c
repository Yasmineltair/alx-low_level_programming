#include "main.h"

/**
  * _sqrt_recursion - function that returns
  * the natural square root of a number
  * @n: the input number
  * Return: sqrt of n
  * @value: square root
  */

int square(int n, int value);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}
/**
  * square - function to find square root
  * @n: number which we will find its sqrt
  * @value: square root
  * Return: sqrt
  */
int square(int n, int value)
{
if (value * value == n)
{
return (value);
}
else if (value * value < n)
{
return (square(n, value + 1));
}
else
{
return (-1);
}
}

