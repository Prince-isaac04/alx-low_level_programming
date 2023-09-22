#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * create_array - create array of char and initailize it with specific char
 * memset - to initailize a character to memmory of array
 * Return: array
 * @size: size of variablr type
 * @c:character
 */

char *create_array(unsigned int size, char c)
{
	char *array;

	if (!size)
		return (NULL);
	array = malloc(sizeof(char) * size);
	if (!array)
		return (NULL);
	memset(array, c, size);

	return (array);
}
