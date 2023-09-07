#include "main.h"

/**
  * _strlen - function that get the size of string
  * @s: input string
  * Return: string size
  */

int _strlen(char *s)
{
	int size;

	for (size = 0; s[size] != '\0'; size++)
		;
	return (size);
}

/**
  * string_nconcat - function that concatenates two strings.
  * @s1: first inpur string
  * @s2: second input string
  * @n: size
  * Return: pointer
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *c;
int size1;
unsigned int i, j;

if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";
size1 = _strlen(s1);
c = malloc(size1 + n + 1);
if (c == NULL)
{
	return (NULL);
}
for (i = 0; s1[i] != '\0'; i++)
c[i] = s1[i];
for (j = 0; j < n; j++)
{
	c[i] = s2[i];
	i++;
}
c[i] = '\0';
return (c);
}
