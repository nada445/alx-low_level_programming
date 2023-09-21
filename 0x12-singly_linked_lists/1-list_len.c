#include "lists.h"
/**
 * list_len - prints len
 * @h: var
 * Return: num
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	if (!h)
		return (0);
	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
