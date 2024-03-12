#include "search_algos.h"

/**
  * linear_search - int linear_search
  * (int *array, size_t size, int value)
  * @array: a pointer to the first element of the array to search in
  * @size: number of elements in array
  * @value: the value to search for
  * Return: first index where value is located
  */

int linear_search(int *array, size_t size, int value)
{
int i;

if (array == NULL)
	return (-1);
for (i = 0; i < (int)size; i++)
{
	printf("Value checked array[%d] = [%d]\n", i, array[i]);
	if (array[i] == value)
		return (i);
}
return (-1);
}
