#include "main.h"

/**
  * leet - function that encodes a string into 1337
  * @c: pointer to the string wull be incoded
  * Return: char c
  *
  */

char *leet(char *c)
{
int i, j;
char s1[] = "aAeEoOtTlL";
char s2[] = "4433007711";
for (i = 0; c[i] != '\0'; i++)
{
	for (j = 0; j < 10; j++)
	{
		if (c[i] == s1[j])
		{
			c[i] = s2[j];
		}
	}
}
return (c);
}
