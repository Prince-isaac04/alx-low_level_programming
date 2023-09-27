#ifndef LIST_H
#define LIST_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_t - A structure representing a singly-linked list of integers
 * @m: The integer value stored in the node
 * @next: A pointer to the next node in the list
 * Description: This structure defines a singly-linked list node that contains
 */

typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);


#endif
