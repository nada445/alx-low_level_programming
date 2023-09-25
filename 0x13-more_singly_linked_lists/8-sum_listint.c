#include "lists.h"
/**
 * sum_listint - ijm
 * @head: codkcoed
 * Return: jfjf
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tmp;

	if (!head)
		return (NULL);

	tmp = head;

	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
