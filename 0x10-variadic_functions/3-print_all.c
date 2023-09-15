#include "variadic_functions.h"

/**
  * format_char - format ch
  * @separator: separators between strings
  * @ptr: argument pointer
  */

void format_char(char *separator, va_list ptr)
{
	printf("%s%c", separator, va_arg(ptr, int));
}

/**
  * format_int - format int
  * @separator: separator between strings
  * @ptr: argument pointer
  */

void format_int(char *separator, va_list ptr)
{
printf("%s%d", separator, va_arg(ptr, int));
}

/**
  * format_float - format float
  * @separator: separator between strings
  * @ptr: argument pointer
  */

void format_float(char *separator, va_list ptr)
{
printf("%s%f", separator, va_arg(ptr, double));
}

/**
  * format_string - format string
  * @separator: separator between strings
  * @ptr: argument pointer
  */

void format_string(char *separator, va_list ptr)
{
char *s = va_arg(ptr, char *);
switch ((int)(!s))
case 1:
s = "(nil)";
printf("%s%s", separator, s);
}

/**
  * print_all - function to print everything
  * @format: string format
  */

void print_all(const char * const format, ...)
{
	int i = 0;
	int j;
	char *separator = "";
	va_list ptr;
	token_t tokens[] = {
		{"c", format_char},
		{"i", format_int},
		{"f", format_float},
		{"s", format_string},
		{NULL, NULL}
	};
	va_start(ptr, format);
	while (format && format[i])
	{
		j = 0;
		while (tokens[j].token)
		{
			if (format[i] == tokens[j].token[0])
			{
				tokens[j].f(separator, ptr);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(ptr);
}
