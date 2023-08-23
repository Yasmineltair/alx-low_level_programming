#include "main.h"

/**
  * rot13 - function that encodes a string using rot13.
  * @c: string
  * Return: char c
  *
  */

char *rot13(char *c)
{
int i;
char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
char *ptr = c;
while (*c)
{
	for (i = 0; i <= 52; i++)
	{
		if (*c == rot13[i])
		{
			*c = ROT13[i];
			break;
		}
	}
	c++;
}
return (ptr);
}
