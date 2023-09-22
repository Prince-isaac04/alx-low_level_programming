#include "main.h"

/**
 * _memset - set the inital memorysize
 * @s: pointer
 * @b: initail char
 * @n: number of memory space
 * Return: s memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
