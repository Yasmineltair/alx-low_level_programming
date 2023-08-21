#include "main.h"

/**
  * _strlen - function that returns the length of a string
  * @s: the string which we return its strength
  * Return: the length of a string
  */

int _strlen(char *s)
{
int i;
for (i = 0; *s != '\0'; s++)
	++i;
return (i);
}
