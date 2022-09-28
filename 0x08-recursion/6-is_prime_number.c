#include "main.h"

/**
 * helperFunction - returns 0 or 1
 * @num: number
 * @i: possible factor of number
 * Return: 0
 */

int helperFunction(int num, int i)
{
	if (i < num)
	{
		if (num % i == 0)
		{
			return (0);
		}
		else
		{
			return (helperFunction(num, i + 1));
		}
	}
	else
	{
		return (1);
	}
}

/**
 * is_prime_number - checks if number is prime number or not
 * @n: number
 * Return: 0
 * 0 is not a prime number
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (helperFunction(n, 2));
	}
}
