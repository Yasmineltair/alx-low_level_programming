#include "main.h"
/**
  * print_alphabet - Make the alphabet
  * print_alphabet - function that will print the alphabet 10 times
  * Return: void
*/
void print_alphabet(void)
{
char ch;
int i;
i = 0;
while (i < 10)
{
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
_putchar('\n');
i++;
}


}
