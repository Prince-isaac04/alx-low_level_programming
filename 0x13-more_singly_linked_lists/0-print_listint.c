#include "lists.h"

/**
 * struct listint_t - A structure representing a singly-linked list of integers
 * @m: The integer value stored in the node
 * @next: A pointer to the next node in the list
 * Description: This structure defines a singly-linked list node that contains
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	if (!h)
		return(0);
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
