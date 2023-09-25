#include "lists.h"
/**
 * free_listint2 - fsvgdf
 * @head: h
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;
	listint_t *node = *head;

	if (!head)
		return;

	while (node)
	{
		tmp = node;
		node = node->node;
		free(tmp);
	}
	*head = NULL;
}
