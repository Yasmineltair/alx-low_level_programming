#include "variadic_functions.h"

/**
  * sum_them_all - function that returns
  * the sum of all its parameters.
  * @n: number of parameters
  * Return: sum of all its parameters.
  */

int sum_them_all(const unsigned int n, ...)
{
int i = n;
int sum = 0;
va_list count;
if (n == 0)
return (0);
while (i--)
va_start(count, n);
sum += va_arg(count, int);
va_end(count);
return (sum);
}
