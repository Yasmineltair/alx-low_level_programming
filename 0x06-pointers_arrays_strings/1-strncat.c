#include "main.h"

/**
  * _strncat - function that concatenates two string
  * @dest: pointer to destination input
  * @src: pointer to source input
  * @n:most number of bytes from src
  * Return: pointer to the resulting string dest
  */

char *_strncat(char *dest, char *src, int n)
{
int i;
int j;
i = 0;
while (dest[i])
		i++;
for (j = 0; j < n && src[j]; j++)
dest[i + j] = src[j];
dest[i + j] = '\0';
return (dest);
}
