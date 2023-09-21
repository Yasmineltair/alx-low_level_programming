#include "lists.h"

/**
  * _strlen - function to get the string length
  * @str: input string
  * Return: string length
  */

int _strlen(char *str)
{
	int i = 0;

	if (!str)
		return (0);
	while (str++)
		i++;
	return (i);
}

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
	printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
	h = h->next;
	i++;
}
return (i);
}

