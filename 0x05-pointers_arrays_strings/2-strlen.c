#include "main.h"

/**
 * _strlen - Return the length of a string
 * @s: string
 * Return: 0
 */

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;

	return (len);
}
