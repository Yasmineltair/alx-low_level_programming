#include "lists.h"

/**
  * _strlen - function to get string length
  * @str: input string
  * Return: length of string
  */
int _strlen(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
		;
	return (i);
}
/**
  * add_node_end - function that adds a new node at the end
  * @head: pointer to the head node
  * @str: needs to be dublicated
  * Return: the address of the new element
  */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *current_node;

	if (str == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = _strlen(new_node->str);
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	current_node = *head;
	while (current_node->next)
	{
		current_node = current_node->next;
	}
	current_node->next = new_node;
	return (new_node);
}
