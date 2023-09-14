#include "variadic_functions.h"

/**
  * print_numbers - unction that prints numbers,
  * @separator: string to be printed between numbers
  * @n: number of integers passed to the function
  * Return: void
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
int i = n;
va_list pr;

if (!n)
{
	printf("\n");
}
va_start(pr, n);
while (i--)
printf("%d%s", va_arg(pr, int), i ? (separator ? separator : "") : "\n");
va_end(pr);
}
