#include "main.h"

/**
  * _puts_recursion - function that prints a string.
  * @s: string to be printed
  * Return: void
  */

void _puts_recursion(char *s)
{
if (*s == '\0')
{
	putchar('\0');
}
else
{
	putchar(*s);
	_puts_recursion(s + 1);
}
}
