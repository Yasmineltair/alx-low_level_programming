#include "main.h"

/**
  * array_range -  function that creates an array of integers
  * @min: min array value
  * @max: max array value
  * Return: the pointer to the newly created array
  *
  */

int *array_range(int min, int max)
{
int *s;
int size;
int i;

if (min > max)
	return (NULL);
size = max - min + 1;
s = malloc(sizeof(int) * size);
if (s == 0)
	return (NULL);
for (i = 0; min <= max; i++)
	s[i] = min++;
return (s);
}
