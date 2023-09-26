#include "lists.h"
/**
 * listint_len - num
 * @h: head
 * Return: num
 */
size_t listint_len(const listint_t *h)
{
	size_t cnt = 0;

	while (h)
	{
		h = h->next;
		cnt++;
	}

	return (cnt);
}
/**
 * insert_nodeint_at_index - ijji
 * @head: h
 * @idx: idx
 * @n: num
 * Return: int
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *tmp, *new;

	new = malloc(sizeof(listint_t));

	if (!new || !head || (!(*head) && idx > 0) || !new)
		return (NULL);
	if (!idx)
	{
		new->n = n;
		new->next = *head;
		*head = new;
		return (new);
	}
	tmp = *head;
	while (tmp)
	{
		if (i == idx - 1)
		{
			new->n = n;
			new->next = tmp->next;
			tmp->next = new;
			return (new);
		}
		tmp = tmp->next;
		i++;
	}

		free(new);
		return (NULL);
}
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
		return (0);

	n = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;
	return (n);
}
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
