#include "main.h"

/**
 * _strstr - Locates a string
 * @haystack: string in which needle is checked for
 * @needle: substring to find in haystack
 * Return: 0
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned i = 0, j = 0;

	while (haystack[i])
	{
		while (needle[j] && (haystack[i] == needle[0]))
		{
			if (haystack[i + j] == needle[j])
				j++;
			else
				break;
		}
		if (needle[j])
		{
			i++;
			j = 0;
		}
		else
			return (haystack + i);
	}
	return (0);
}
