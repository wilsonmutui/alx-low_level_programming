#include "list.h"

/**
 * @h: linked list of type listint_t to print
 * print_listint - printing all elements of a linked list
 * Return: number of nods
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}
	return (num);
}
