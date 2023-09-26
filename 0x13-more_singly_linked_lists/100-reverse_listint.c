#include "lists.h"
/**
 * reverse_listint - lskcodc
 * @head: kdkd
 * Return: dcdc
 */
listint_t *reverse_listint(listint_t **head)
{
	int sz = listint_len(*head);

	if (!head || !(*head))
		return (NULL);

	while (sz)
	{
		insert_nodeint_at_index(head, sz, (*head)->n);
		pop_listint(head);
		sz--;
	}
	return (*head);
}
