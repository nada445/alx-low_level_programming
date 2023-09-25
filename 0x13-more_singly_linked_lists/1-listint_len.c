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

