#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - entry point
* Return: always 0 (success)
*/
int main(void)
{
int n = 122;
for (n = 48; n <= 57; n++)
{
	putchar(n);
	putchar(',');
	putchar(' ');
}
putchar('\n');
return (0);
}
