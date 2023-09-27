#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a linked list.
 * @head: A pointer to a pointer to the head of the list.
 * @n: The integer value to be stored in the new node.
 *
 * onReturn: A pointer to the new node, or NULL on failure.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	if (head == NULL)
		return (0);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	if (head == NULL)
		new_node->next = NULL;
	else
		new_node->next = *head;
	new_node-> = n;
	*head = new_node;
	return (new_node);
}
