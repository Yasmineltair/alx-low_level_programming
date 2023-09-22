#include "lists.h"

/**
  * add_node_end - function that adds a new node at the end
  * @head: pointer to the head node
  * @str: needs to be dublicated
  * Return: the address of the new element
  */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *current_node = *head;
	size_t i;
list_t *new_node = malloc(sizeof(list_t));

if (new_node == NULL || head == NULL)
{
	return (NULL);
}
if (str)
{
new_node->str = strdup(str);
if (!new_node->str)
{
	free(new_node);
	return (NULL);
}
for (i = 0; str[i]; i++)
;
new_node->len = i;
}
if (current_node)
{
	while (current_node->next)
	{
		current_node = current_node->next;
		current_node->next = new_node;
	}
}
else
{
	*head = new_node;
}
return (new_node);
}

