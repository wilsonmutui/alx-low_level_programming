#include "list.h"

/**
 * print_list - print elements in the list
 * @h: head of the list
 * Return: number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	int w;

	if (h == NULL)
		return (0);
	for (w = 1; h->next != NULL; w++)
	{
		if (h->str == NULL)
			printf("[%u] %s\n", h->len, "(nil)");
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;

	}
	printf("[%u] %s\n", h->len, "(nil)");
	return (w);
}

