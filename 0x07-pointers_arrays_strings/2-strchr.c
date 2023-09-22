#include <stdio.h>
#include "main.h"

/**
 * _strchr - locate a string char
 * @s: pointer
 * @c: character
 * Return: Always 0 (success)
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; i >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (NULL);
}
