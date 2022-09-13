#include "main.h"

/**
 * main - Print lowercase alphabets
 *
 * Return: 0
 */

void print_alphabet(void)
{
	char j;

	for (j = 'a'; j <= 'z'; j++)
	{
		putchar(j);
	}
	putchar('\n');
}
