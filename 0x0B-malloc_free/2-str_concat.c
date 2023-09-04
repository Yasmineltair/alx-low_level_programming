#include "main.h"

/**
  * _strlength - function to find the length of string
  * @s: input string
  * Return: int
  */

int _strlength(char *s)
{
	int size = 0;

	for (; s[size] != '\0'; size++)
		;
		return (size);
}

/**
  * str_concat - function that concatenates two strings.
  * @s1: first input
  * @s2: second input
  * Return: pointer to a newly allocated space in memory
  */

char *str_concat(char *s1, char *s2)
{
int size1;
int size2;
int i;
char *c;

if (s1 == NULL)
	s1 = "\0";
if (s2 == NULL)
	s2 = "\0";
size1 = _strlength(s1);
	size2 = _strlength(s2);
c = malloc((size1 + size2) * sizeof(char) + 1);
if (c == 0)
	return (0);
for (i = 0; i <= size1 + size2; i++)
{
	if (i < size1)
		c[i] = s1[i];
	else
		c[i] = s2[i - size1];
}
c[i] = '\0';
return (c);
}
