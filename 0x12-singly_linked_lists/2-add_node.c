#include "lists.h"
/**
 * add_node - add a node at the start of list
 * @head: address of pointer to head node
 * @str: str field of node
 * Return: size of list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newhead = malloc(sizeof(list_t));

	if (!head || !newhead)
		return (NULL);
	if (str)
	{
		newhead->str = strup(str);
		if (!newhead->str)
		{
			free(newhead);
			return (NULL);
		}
		newhead->len = _strlen(newhead->str);
	}
	newhead->next = *head;
	*head = newhead;
	return (newhead);
}
