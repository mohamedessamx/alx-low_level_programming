#include "lists.h"
/**
 * find_listint_loop_fl - finds a loop in alinked list
 * @head: linked list to search
 * Return: address of node where loop sarat/returns, NULL if no loop
 */
listint_t *find_listint_loop_fl(listint_t *head)
{
	listint_t *ptr, *end;

	if (head == NULL)
		return (NULL);
	for (end = head->next; end != NULL; end = end->next)
	{
		if (end == end->next)
			return (end);
		for (ptr = head; ptr != end; ptr = ptr->next)
			if (ptr == end->next)
				return (end->next);
	}
	return (NULL);
}
/**
 * free_listint_safe - frees a listint_t list.
 * @h: pointer to first node
 * Return: the size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *next, *loopnode;
	size_t length;
	int loop = 1;

	if (h == NULL || *h == NULL)
		return (0);
	loop = find_listint_loop_fl(*h);
	for (length = 0; (*h != loopnode || loop) && *h != NULL; *h = next)
	{
		length++;
		next = (*h)->next;
		if (*h == loopnode && loop)
		{
			if (loopnode == loopnode->next)
			{
				free(*h);
				break;
			}
			length++;
			next = next->next;
			free((*h)->next);
			loop = 0;
		}
		free(*h);
	}
	*h = NULL;
	return (length);
}
