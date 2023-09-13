#include "function_pointers.h"

/**
  * int_index - function that searches for an integer.
  * @array: input array
  * @size: the array's size
  * @cmp: function which will do the compare
  * Return:  index of the first element
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

if (array && size && cmp)
while (i < size)
{
if (cmp(array[i]))
return (i);
i++;
}
return (-1);
}

