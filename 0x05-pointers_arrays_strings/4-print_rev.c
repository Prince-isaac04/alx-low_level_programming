#include "main.h"
#include <stddef.h>

/**
 * print_rev - print in reverse
 *@s: character to print in reverse
 */
void print_rev(char *s)
{
	int longi = 0;
	int i;

	while (*s != '\0')
	{
		s++;
		longi++;
	}
	s--;
	for (i = longi; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}


