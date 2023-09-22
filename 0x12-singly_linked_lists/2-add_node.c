#include "lists.h"

/**
  * add_node - function that adds a new node at the beginning
  * @head: pointer to the address of first node
  * @str: str to be duplicated
  * Return: the address of the new element
  */

list_t *add_node(list_t **head, const char *str)
{
	int length = 0;

list_t *new_node = malloc(sizeof(list_t));
if (!head || !new_node)
	return (NULL);
else
{
while (str[length])
	length++;
new_node->len = length;
new_node->str = strdup(str);
new_node->next = *head;
*head = new_node;
return (new_node);
}
}
