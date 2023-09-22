#include "main.h"

/**
 * _puts - measure
 *@str: strung to measure
 * Return: lenght
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}
