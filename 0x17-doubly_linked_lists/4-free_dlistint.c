#include "lists.h"
/**
 * free_dlistint - free a dlist
 * @head: address of head node
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *node;

	while (node)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
