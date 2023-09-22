#include "list.h"
/**
 * print_list - print all element in asimgly linked list
 *
 * @h: head of the list
 * Return: total number of node
 */

size_t print_list(const list_t *h)
{
	int m;

	if (h == NULL)
		return (0);
	for (m = 1; h->next != NULL; m++)
	{
		if (h->str == NULL)
		{

		printf("[%u] %s\n", h->len, "(null)");
		}
		else
		{
			printf("[%u] %s\n, h->len, h->str");
		}
		h = h->next;
	}
	printf("[%u] %s\n, h->len, "(nil)");
	return (m);
}
