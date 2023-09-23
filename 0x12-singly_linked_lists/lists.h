#ifndef _LIST_H_
#define _LIST_H_

/**
 * struct list_s - is a sigly lidt
 * @str: string
 * @len: lenght of string
 * @next: pointer to next node
 */

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);

#endif
