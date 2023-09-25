#include "lists.h"
/**
 * free_listint2 - fsvgdf
 * @head: h
 * Return: void
 */
void free_listint2(listint_t **head)
{
	lisint_t *node;
	listint_t *tmp = *head;

	if (!head)
		return;

	while (tmp)
	{
		tmp = tmp->next;
		free(node);
		node = tmp;
	}
	*head = NULL;
}
