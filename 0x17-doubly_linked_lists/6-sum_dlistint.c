#include "lists.h"

/**
  * sum_dlistint - function that returns
  * the sum of all the data of a dlistint_t linked list.
  * @head: head node
  * Return: the sum of all the data
  */

int sum_dlistint(dlistint_t *head)
{
int sum = 0;

while (head)
{
	sum += head->n;
	head = head->next;
}
return (sum);
}
