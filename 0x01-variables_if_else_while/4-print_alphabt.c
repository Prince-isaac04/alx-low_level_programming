#include <stdio.h>
/**
 * main - receives no argument*
 * Return: Always 0 (success)
 */
int main(void)
{
	char y;

	for (y  = 'a'; y <= 'z'; y++)
	{
		if (y != 'q' && y != 'e')
		{
			putchar(y);
		}
	}
	putchar('\n');
	return (0);
}
