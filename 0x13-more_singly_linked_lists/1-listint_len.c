#include "lists.h"

/**
 * listint_len - Counts the number of nodes in a linked list.
 * @h: A pointer to the head of the list.
 *
 * Description:
 * This function counts the number of nodes (elements) in a singly-linked list.
 *
 * Return: The number of nodes in the list.
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
