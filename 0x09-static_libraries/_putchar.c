#include <unistd.h>

/**
 * _putchar - writes character c to sdout
 * @c: character
 * Return: 0
 * On error, -1 is returned
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
