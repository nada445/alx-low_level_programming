#include "lists.h"
#include <string.h>

/**
 * print_list - print list
 * @h: var
 * Return: num
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		if (h->str == NULL)
		{
		printf("[0] (nil)\n");
		}
		else
		{
		printf("[%u] ", h->len);
		printf("%s\n", h->str);
		}
		count++;
		h = h->next;
	}

	return (count);
}
