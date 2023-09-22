#include "main.h"

/**
 * _isupper - check for lowercase character
 * @c:The character to be checked
 * Return: 1 for uppercase character or 0 for anything else
 */
void print_triangle(int size)
{
	int hgh, base;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (hgh = 1; hgh <= size; hgh++)
		{
			for (base = 1; base <= size; base++)
			{
				if (hgh + base) <= size)
					_putchar (' ');
				else
					_putchar('#');
			}
		_putchar('\n')
		}
	}
}

