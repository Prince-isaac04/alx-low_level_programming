#include "main.h"
/**
 *print_diagonal- receives no argument
 *@n: is the number of time \ character
 *Return: Always 0 (success)
 */
void print_diagonal(int n)
{
	int post;
	int space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (post = 1; post <= n; post++)
		{
			for (space = 1; space <= post; space++)
				_putchar(' ');
			_putchar(92); /*is equal to '/' char*/
			_putchar('\n');
		}
	}
}
