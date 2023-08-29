#include "lists.h"
/**
 * insert_nodeint_at_index -  inserts a new node at a given position.
 * @head: pointer to first node
 * @idx: given index
 * @n: integer to added
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *newnode = malloc(sizeof(listint_t));
	unsigned int i = 0;

	if (!head || !newnode)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	if (!idx)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	node = *head;
	while (node)
	{
		if (i == idx - 1)
		{
			newnode->next = node->next;
			node->next = newnode;
			return (newnode);
		}
		i++;
		node = node->next;
	}
	free(newnode);
	return (NULL);
}
