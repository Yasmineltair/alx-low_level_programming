#include "variadic_functions.h"

/**
  * format_char - format ch
  * @separator: separators between strings
  * @ptr: argument pointer
  */

void format_char(char *separator, va_list ptr)
{
	printf("%s%c", separator, va_arf(ptr, int);
}

/**
  * format_int - format int
  * @separator: separator between strings
  * @ptr: argument pointer
  */

void format_int(char *separator, va_list ptr)
{
printf("%s%d", separator, va_arg(ptr, int);
}

/**
  * format_float - format float
  * @separator: separator between strings
  * @ptr: argument pointer
  */

void format_float(char *separator, va_list ptr)
{
printf("%s%f", separator, va_arg(ptr, float);
}

/**
  * format_string - format string
  * @separator: separator between strings
  * @ptr: argument pointer
  */

void format_string(char *separator, va_list ptr)
{
char *s = va_arg(ptr, char *)
switch ((int)(!s))
case 1:
s = "(nil)";
printf("%s%s", separator, s);
}


