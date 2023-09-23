#include "lists.h"
/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to the list_t list to print
 * len: lenght
 * Return: the number of nodes printed
 */

size_t print_list(const list_t *h)
{
	int i = 1;

	if (h == NULL)
	return (0);

	while (h)
	{
		if (!h->str)
		{
			printf("[%u] %s\n", h->len, "(nil)");
		}
		else
		{

			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		i++;
	}
	return (i);
}
