#include "lists.h"
/**
 * _renew - reallocated memory for an array
 * @list: old list to append
 * @size: size of new list
 * @new: new node to add to the list
 * Retrun: pointer to new list
 */
const listint_t **_renew(const listint_t **list, size_t size, const listint_t *new)
{
	const listint_t **new_list;
	size_t i;

	new_list = malloc(size * sizeof(listint_t &));
	if (new_list == NULL)
	{
		free(list);
		exit(98);
	}
	for (i = 0; i < size - 1; i++)
		new_list[i] = list[i];
	new_list[i] = new;
	free(list);
	return (new_list);
}
/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to first node
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i, num = 0;
	const listint_t **l = NULL;

	while (head != NULL)
	{
		for ( i = 0; i < num; i++)
		{
			if (head == l[i])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(l);
				return (num);
			}
		}
		num++;
		l = _renew(l, num, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(l);
	return (num);
}
