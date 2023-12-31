#include "lists.h"

/**
  * print_list - prints all elements of list
  * @h: pointer to the first node
  * Return: the number of nodes
  */

size_t print_list(const list_t *h)
{
size_t i = 0;

while (h)
{
	if (!h->str)
	{
		printf("[0] (nil)\n");
	}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		i++;
		h = h->next;
}
return (i);
}
