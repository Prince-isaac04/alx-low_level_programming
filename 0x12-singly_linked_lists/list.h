#ifndef _LIST__H
#define _LIST_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

size_t print_list(const list_t *h);
/**
 * struct list_s - singly list
 * @str: string (malloced string)
 * len: lenght
 * @next: pointer to next node
 */

struct list_s
{
	char *str;
	size_t len;
	struct list_s *next;
} list_t;

#endif
