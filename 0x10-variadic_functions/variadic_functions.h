#ifndef MAIN_HEADER_FILE
#define MAIN_HEADER_FILE

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
  * struct token - struct token
  * @token: format token
  * @f: the function
  */

typedef struct token
{
char *token;
void (*f)(char *, va_list);
} token_t;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
