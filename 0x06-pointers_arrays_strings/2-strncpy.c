#include "main.h"

/**
  * _strncpy - function that copies a string
  * @dest: pointer to destination input
  * @src: pointer to cource input
  * @n: most number of bytes from src
  * Return: dest
  */

char *_strncpy(char *dest, char *src, int n)
{
int j;
for (j = 0; j < n && src[j] != '\0'; j++)
	dest[j] = src[j];
while (j < n)
{
	dest[j] = '\0';
	j++;
}
return (dest);

}
