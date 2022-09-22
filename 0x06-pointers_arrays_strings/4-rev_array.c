#include "main.h"

/**
 * reverse_array - Reverses the contents of an array
 * @a: array
 * @n: number of elements
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int i, tm;

	for (i = 0; i < n; i++)
	{
		n--;
		tm = a[i];
		a[i] = a[n];
		a[n] = tm;
	}
}
