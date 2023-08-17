#include "main.h"

/**
* print_numbers -  function that prints the numbers, from 0 to 9
* Return: always(0) success
*/

void print_numbers(void)
{
int i = 0;
for (i >= 0; i <= 9; i++)
{
	_putchar(i + 48);
}
_putchar('\n');
}
