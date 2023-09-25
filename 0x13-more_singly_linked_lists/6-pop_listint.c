#include "lists.h"
/**
 * pop_listint - kikm
 * @head: rvfc
 * Return: efre
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;
	if (!head || !(*head))
		return (-1);

	n = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;
	return (n);
}

