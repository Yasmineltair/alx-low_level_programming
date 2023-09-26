#include "lists.h"

/**
  * insert_nodeint_at_index - function that inserts
  * a new node at a given position.
  * @head: adress of the pointer to the first node
  * @idx: the index of the list
  * @n: value of the new node
  * Return: the address of the new node
  */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new_node = malloc(sizeof(listint_t));
listint_t *temp = *head;
unsigned int i;

if (!head || !new_node)
	return (NULL);
new_node->n = n;
new_node->next = NULL;

if (idx == 0)
{
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
for (i = 0; temp && i < idx; i++)
{
	if (i == idx - 1)
	{
		new_node->next = temp->next;
		temp->next = new_node;
		return (new_node);
	}
	else
	{
		temp = temp->next;
	}
}
return (NULL);
}
