#include "lists.h"

/**
  * listint_len - function that returns
  * the number of elements
  * @h: pointer to the first node
  * Return: number of elements
  */

size_t listint_len(const listint_t *h)
{
int i = 0;
while (h)
{
	h = h->next;
	i++;
}
return (i);
}
