#include <stdio.h>

/**
 * main - Entry point of the program
 * Description: This function prints the size of various data types
 * in bytes.
 * Return: 0 to indicate successful execution of the program.
 */
int main (void) 
{
	printf("Size of char: %zu bytes\n", sizeof(char));
	printf("Size of int: %zu bytes\n", sizeof(int));
	printf("Size of long int: %zu bytes\n", sizeof(long int));
	printf("Size of long long int: %zu bytes\n", sizeof(long long int));
	printf("size of a float: %zu bytes\n", sizeof(float));
	return (0);
}
	  
