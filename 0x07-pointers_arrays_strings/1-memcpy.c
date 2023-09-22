#include "main.h"

/**
 * _memcpy - copy memory block
 * @src: source tocopy
 * @dest: destination
 * @n: numbers of bytes to copy
 * Return: pointer dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
