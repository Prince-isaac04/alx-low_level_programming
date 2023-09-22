#include "main.h"
/**
 *_strlen - measure the length of a string
 *@s: char to measure
 *Return: length
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
