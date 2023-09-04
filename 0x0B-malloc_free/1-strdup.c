#include "main.h"

/**
  * _strdup - function that returns a pointer to
  * a newly allocated space in memory
  * @str: input string
  * Return: pointer to a newly allocated space in memory
  */

char *_strdup(char *str)
{
int i;
int size = 0;
char *s;
if (str == NULL)
	return (NULL);
for (i = 0; str[size] != '\0'; size++)
	;
s = malloc(size * sizeof(*str) + 1);
if (s == 0)
	return (NULL);
else
{
	for (i = 0; i < size; i++)
		s[i] = str[i];
}
return (s);
}
