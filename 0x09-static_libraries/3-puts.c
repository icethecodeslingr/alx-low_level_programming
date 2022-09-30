#include <stdio.h>
#include "main.h"

/**
 * _puts - Prints a string
 * @str: String to be printed
 * Return: 0
 */

void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		putchar(*(str + i));
		i++;
	}
	putchar(10);
}
