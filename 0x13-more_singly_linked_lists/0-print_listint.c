#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t list
 * @h: head
 * Return: num
 */
size_t print_listint(const listint_t *h)
{
	size_t cnt = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		cnt++;
	}
	return (cnt);
}
