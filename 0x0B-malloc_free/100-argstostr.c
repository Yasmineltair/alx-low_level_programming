#include "main.h"

/**
  * _strlength - function to get size of string
  * @s: string
  * Return: size of string
  */

int _strlength(char *s)
{
	int size;

	for (size = 0; s[size] != '\0'; size++)
		;
	return (size);
}

/**
  * argstostr -  function that concatenates all
  * the arguments of your program
  * @ac: number of arguments
  * @av: argument
  * Return: pointer to a new string
  */

char *argstostr(int ac, char **av)
{
int i, j, nc = 0, con = 0;
char *st;

if (ac == 0 || av == NULL)
	return (NULL);
for (i = 0; i < ac; i++, nc++)
	nc += _strlength(av[i]);
st = malloc(sizeof(char) * nc + 1);
if (st == 0)
	return (NULL);
for (i = 0; i < ac; i++)
{
	for (j = 0; av[i][j] != '\0'; j++, con++)
		st[con] = av[i][j];
	st[con] = '\n';
	con++;
}
st[con] = '\0';
return (st);
}

