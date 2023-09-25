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

	while(tmp)
	{
		free(head);
		tmp = tmp->next;
		head = tmp;
	}
}
