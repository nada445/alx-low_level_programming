#include "lists.h"
/**
 * delete_nodeint_at_index - fdvfv
 * @head: fdvv
 * @index: efe
 * Return: void
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{

	unsigned int i = 0;
	listint_t *tmp, *node;

	if (!head || !(*head))
		return (-1);
	tmp = *head;
	if (!index)
	{
		(*head) = (*head)->next;
		free(tmp);
		return (1);
	}
	while (tmp)
	{
		if (i == index)
		{
			node->next = tmp->next;
			free(node);
			return (1);
		}
		i++;
		node = tmp;
		tmp = tmp->next;

	}
	return (-1);
}
