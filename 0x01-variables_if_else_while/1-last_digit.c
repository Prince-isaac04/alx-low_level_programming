#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - headers goes there
 * Return: always 0
*/
int main(void)
{
	int n;
	int lastnum;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lastnum = n % 10;
	if (lastnum > 5)
	{
		printf("last digit of %d is %d and is greater than 5\n", n, lastnum);
	}
	else if (lastnum == 0)
	{
		printf("last digit of %d is %d and is 0\n", n, lastnum);
	}
	else
	{
		printf("last digit of %d is %d and is less than 6 and not 0\n", n, lastnum);
	}
	return 0;
}
