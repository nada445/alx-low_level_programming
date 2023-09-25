#include "lists.h"
/**
 * get_nodeint_at_index - okok
 * @head: jbuh
 * @index: huhuh
 * Return: int
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tmp;

	if (!head)
		return (NULL);

	tmp = head;

	while (tmp && i < index)
	{
		tmp = tmp->next;
		i++;
	}
	return (tmp);
}
