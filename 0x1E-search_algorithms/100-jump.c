#include "search_algos.h"
#include <math.h>

/**
  * jump_search - searches for a value in a sorted
  array of integers using the Jump search algorithm
  * @array: a pointer to the first element of the
  * array to search in
  * @size: the number of elements in array
  * @value: the value to search for
  * Return: the first index where value is located
  */

int jump_search(int *array, size_t size, int value)
{
int jumb;
int i = 0;
int j = 0;
int prev = 0;

if (array == NULL || size == 0)
	return (-1);
jumb = (int)sqrt((double)size);
do {
	printf("Value checked array[%d] = [%d]\n", i, array[i]);
	if (array[i] == value)
		return (i);
	j++;
	prev = i;
	i = j * jumb;
} while (i < (int)size && array[i] < value);
printf("Value found between indexes [%d] and [%d]\n", prev, i);
for (; prev <= i && prev < (int)size; prev++)
{
	printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
	if (array[prev] == value)
		return (prev);
}
return (-1);
}
