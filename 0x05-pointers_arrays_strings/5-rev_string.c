#include "main.h"
#include <string.h>
/**
 * rev_string - check the code
 * @s: string i search
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int lenght = strlen(s);
	int start = 0;
	int end = lenght - 1;

	
	while (start < end)
	{
		int tep = s[start];
		s[start] = s[end];
		s[end] = tep;

		start++;
			end--;
			_putchar(*s);
	}
}
