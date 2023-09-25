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
	listint_t *tmp, *new, *tmp2;

	new = malloc(sizeof(listint_t));

	if (!new || !head || (!(*head) && idx > 0))
		return (NULL);
	tmp = *head;
	while (tmp && i < idx - 1)
	{
		tmp = tmp->next;
		i++;
	}

	if (!tmp && i != idx - 1)
		return (NULL);
	if  (!tmp && i == idx - 1)
	{
		tmp->n = n;
		tmp->next = NULL;
		return (tmp);
	}
	tmp2 = tmp->next;
	new->n = n;
	new->next = tmp2;
	tmp->next = new;
	return (new);
}
