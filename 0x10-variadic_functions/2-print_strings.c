#include "variadic_functions.h"

/**
  * print_strings -  function that prints string
  * @separator: the string to be printed between the strings
  * @n: number of strings passed to the function
  * Return: void
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
int i = n;
char *s;
va_list ptr;

if (!n)
{
	printf("\n");
}
va_start(ptr, n);
	while (i--)
	printf("%s%s", (s = va_arg(ptr, char *)) ? s : "(nil)",
			i ? (separator ? separator : "") : "\n");
	va_end(ptr);
	}
