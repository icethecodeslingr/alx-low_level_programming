#include <stdio.h>

/**
 * main - Print lowercase alphabets
 *
 * Return: 0
 */

print_alphabet(void)
{
	int j;

	for (j = 'a'; j <= 'z'; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
