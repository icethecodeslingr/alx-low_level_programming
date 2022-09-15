#include <stdio.h>
#include "main.h"

/**
 * print_line - Print a straight line
 * @n: integer used in function
 * Return: 0
 */

void print_line(int n)
{
	while (n-- > 0)
	{
		putchar('_');
	}
	putchar('\n');
}
