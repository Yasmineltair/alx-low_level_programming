#include "main.h"

/**
  * rev_string - a function that reverses a string
  * @s: the string to be reversed
  * Return: void
  */
void rev_string(char *s)
{
int l;
int w;
char swp;
for (l = 0; s[l] != ('\0'); l++)
;
for (w = 0; w < l / 2; w++)
{
swp = s[w];
s[w] = s [l - 1 - w];
s[l - 1 - w] = swp;
}
}

