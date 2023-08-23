#include "main.h"

/**
  * string_toupper - function that changes to uppercase.
  * Return: char uppercase
  * @n : array of lowercase characters
  */

char *string_toupper(char *n)
{
int i;
i = 0;
while (n[i] != '\0')
{
	if (n[i] >= 'a' && n[i] >= 'z')
		n[i] = n[i] - 32;
	i++;
}
return (n);
}
