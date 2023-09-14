#include "variadic_functions.h"

/**
  * print_numbers - unction that prints numbers,
  * @separator: string to be printed between numbers
  * @n: number of integers passed to the function
  * Return: void
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list pr;
if (!n)
	printf("\n");
return;
va_start(pr, n);
for (i = 0; i <= n; i++)
printf("%d%s", va_arg(pr, int), i ? (separator ? separator : "") : "\n");
va_end(pr);
}
