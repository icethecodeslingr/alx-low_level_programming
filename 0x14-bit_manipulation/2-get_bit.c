#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: unsigned long int int input
 * @index: index of bit
 * Return: 0
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (n == 0 && index < 64)
		return (0);

	for (i = 0; i <= 63; n >>= 1, i++)
	{
		if (index == i)
		{
			return (n & 1);
		}
	}

	return (-1);
}