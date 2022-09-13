#include <stdio.h>

/**
 * main - Print lowercase alphabets
 *
 * Return: 0
 */

int print_alphabet(void)
{
	char j;
	
	for (j = 'a'; j <= 'z'; j++)
	{
		putchar(j);
	}
	putchar('\n');	
	return (0);
}
