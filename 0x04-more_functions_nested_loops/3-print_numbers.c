#include "main.h"

/**
* print_numbers -  function that prints the numbers, from 0 to 9
* Return: void
*/

void print_numbers(void)
{
int i;
do {
	_putchar(i + 48);
	i++;
}
while (i >= 0 && i <= 9)
	_putchar('/n');
	}
