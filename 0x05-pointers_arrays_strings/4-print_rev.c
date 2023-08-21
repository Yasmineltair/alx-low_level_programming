#include "main.h"

/**
  * print_rev - function that prints a string, in reverse.
  * @s: the string which will be peinted
  * Return: void
  */

void print_rev(char *s)
{
int i = 0;
while (s[i])
i++;
while (i--)
{
putchar(s[i]);
}
putchar('\n');
}
