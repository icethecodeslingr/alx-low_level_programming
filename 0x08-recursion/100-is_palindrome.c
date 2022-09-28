#include "main.h"

/**
 * _length - checks for length of string
 * @s: string
 * Return: 0
 */

int _length(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _length(s + 1));
}

/**
 * checkp - checks if string is palindrome
 * @i: index
 * @lg: lenght of string
 * @s: string
 * Return: 0
 */

int checkp(int i, int lg, char *s)
{
	if (lg > 0)
	{
		if (s[i] == s[lg])
		{
			return (checkp(i + 1, lg - 1, s));
		}
		else if (s[i] != s[lg])
		{
			return (0);
		}
		else
		{
			return (1);
		}
	}
	return (1);
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string
 * Return: 0
 */

int is_palindrome(char *s)
{
	return (checkp(0, _length(s) - 1, s));
}
