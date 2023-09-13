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
if (array && size && action)
	action(*array++);
}
