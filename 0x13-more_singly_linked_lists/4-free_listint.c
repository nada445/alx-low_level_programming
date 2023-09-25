#include "lists.h"
/**
 * free_listint - fsvgdf
 * @head: h
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *tmp = head;

	if (!head)
		return;

	while (tmp)
	{
		tmp = tmp->next;
		free(head);
		head = tmp;
	}
	if (head)
	free(head);
}
