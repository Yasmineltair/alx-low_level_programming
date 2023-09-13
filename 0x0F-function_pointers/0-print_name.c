#include "function_pointers.h"

/**
  * print_name -  function that prints a name.
  * @name: input name
  * @f: pointer to function
  * Return: void
  */

void print_name(char *name, void (*f)(char *))
{
f(name);
}
