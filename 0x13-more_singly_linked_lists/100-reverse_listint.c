#include "lists.h"

/**
  * reverse_listint - function that reverses a list
  * @head: address of the pointer of the first node
  * Return: pointer to the first node of the reversed list
  */

listint_t *reverse_listint(listint_t **head)
{
listint_t *node = NULL;
listint_t *next = NULL;

while (*head)
{
	next = (*head)->next;
	(*head)->next = node;
	node = *head;
	*head = next;
}
*head = node;
return (*head);
}
