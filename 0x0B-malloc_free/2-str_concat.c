#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_lenght - calculate lenght of string
 * @str: character string to calculate
 * Return: n
 */

int str_lenght(char *str)
{
	int n = 0, i;

	for (i = 0; str[i] != '\0'; i++)
		n++;

	return (n);
}


/**
 * str_concat - concantenate 2 string
 *  s1 + s2 +1
 *  @s1: first string
 *  @s2: second string
 *  Return: ptr
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr = NULL;
	int size;
	int i;
	int j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	size = (str_lenght(s1) + str_lenght(s2) + 1);
	ptr = malloc(size * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < str_lenght(s1); i++)
		*(ptr + i) = *(s1 + i);
	for (j = 0; j < str_lenght(s2); j++, i++)
		*(ptr + i) = *(s2 + j);
	*(ptr + i) = '\0';
	return (ptr);
}
