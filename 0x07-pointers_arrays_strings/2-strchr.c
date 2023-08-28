#include "main.h"

/**
  * _strchr - function that locates a character in a string
  * @s: string which where the character will be located
  * @c: character which will be located
  * Return: pointer to character
  */

char *_strchr(char *s, char c)
{
int i;
for (i = 0; s[i] != '\0'; i++)
	if (s[i] == c)
	{
		return (s + i);
	}
		return ('\0');
}
