#include "lists.h"

/**
  * free_listint2 -  function that frees a listint_t list.
  * @head: pointer to the header node
  */

void free_listint2(listint_t **head)
{
listint_t *node;

while (*head)
{
	node = (*head)->next;
	 free(*head);
	 *head = node;
}
*head = NULL;
}
