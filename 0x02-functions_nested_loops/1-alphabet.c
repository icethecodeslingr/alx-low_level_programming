#include <stdio.h>

/**
 * main - Print lowercase alphabets
 *
 * Return: 0
 */

int print_alphabet(void)
{
	int j;
	
	for (j = 'a'; j <= 'z'; j++)
	{
		putchar(j);
	}
	putchar('\n');	
	print_alphabet();
	return (0);
}
