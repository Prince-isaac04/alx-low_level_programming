#include "main.h"

/**
 * puts2 - print all character
 *@str: atring to print
 * Return: Always 0.
 */
void puts2(char *str)
{
	for (int i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
