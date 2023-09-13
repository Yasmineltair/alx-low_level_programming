#include "main.h"

/**
  * wrdcount - function for word count
  * @s: input string
  * Return: number of string
  */

int wrdcount(char *s);
{
int i = 0;
int n = 0;
for (; s[i]; i++)
	if (s[i] == " ")
	{
		if (s[i + 1] != " " && s[i + 1] != '\0')
			n++;
		else if (i == 0)
			n++;
	}
n++;
return (n);
}

char **strtow(char *str)
{
int i, j,n = 0,
    char **s
}
