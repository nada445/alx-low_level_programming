#include "lists.h"
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
