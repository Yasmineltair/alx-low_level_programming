#include "main.h"

/**
  * _strlrn - function that get the size of string
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
char *s;
int size1;
int size2;
size1 = _strlen(s1);
return (s1);
size2 = _strlen(s2);
return (s2);
s = calloc(n * size1 + size2 + 1); 

}
