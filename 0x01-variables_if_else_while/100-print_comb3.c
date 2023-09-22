#include <stdio.h>
/**
 *main - receives no argument
 *
 *Return: Always 0 (success)
 */
int main(void)
{
	int x;
	int a;
	int count;

	for (x = 0; x <= 9; x++)
	{
		for (a = 0; a <= 9; a++)
			if (x < a)
			{
				putchar('0' + x);
				putchar('0' + a);
				count++;
				if (count < 45)
				{
					putchar(',');
					putchar(' ');
				}
			}
	}
	putchar('\n');
	return (0);
}
