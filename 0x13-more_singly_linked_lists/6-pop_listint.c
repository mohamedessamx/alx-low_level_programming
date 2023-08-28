#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list,
 *				and returns the head node’s data (n).
 * @head: pointer to first node
 * Return: value of popped node
 */
int pop_listint(listint_t **head)
{
	listint_t *node;
	int n;

	if (!head || !*head)
		return (0);
	node = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = node;
	return (n);
}
