#include "function_pointers.h"

/**
  * array_iterator -  function that executes
  * a function given as a parameter on each element of an array.
  * @array: input array
  * @size: the size of the array
  * @action:  pointer to the function will use
  * Return: void
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *stop = array + size - 1;
if (array && size && action)
	while (array <= stop)
	action(*array++);
}
