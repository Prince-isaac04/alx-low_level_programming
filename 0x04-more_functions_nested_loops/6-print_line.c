#include "main.h"
/**
 *print_line - receives no argument
 *@n: number of times to print
 *Return: void
 */
void print_line(int n)
{
	int a;

	for (a = 0; a < n; a++)
	{
		_putchar ('_');
	}
	_putchar ('\n');
}
