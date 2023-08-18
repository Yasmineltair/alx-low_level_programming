#include "main.h"

/**
  * print_triangle - function that prints a triangle
  * @size: the size of the triangle
  * Return: void
*/

void print_triangle(int size)
{
int i, hashes, spaces;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (i = 1; i <= size; i++)
{
for (spaces = size - i; spaces >= 1; spaces--)
{
_putchar(' ');
for (hashes = 1; hashes <= i; hashes--)
{
	_putchar('#');
}
_putchar('\n');
}
}
}
}
