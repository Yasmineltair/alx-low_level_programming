#include "lists.h"

/**
  * add_node_end - function that adds a new node at the end
  * @head: pointer to the head node
  * @str: needs to be dublicated
  * Return: the address of the new element
  */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *current_node;
	size_t i;
list_t *new_node = malloc(sizeof(list_t));

if (new_node == NULL)
{
	return (NULL);
}
new_node->str = strdup(str);
for (i = 0; str[i]; i++)
;
new_node->len = i;
new_node->next = NULL;
current_node = *head;
if (current_node == NULL)
{
	*head = new_node;
}
else
{
	while (current_node->next != NULL)
	{
		current_node = current_node->next;
		current_node->next = new_node;
	}

}
return (*head);
}

