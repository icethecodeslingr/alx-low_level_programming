#include <stdio.h>
/*
 * main - Print an alphabet in uppercase and lowercase
 *
 * Return: 0
 */

int main(void)
{
	char c;

	char d;

	c = 'a';
	d = 'A';
	while
		(c <= 'z') {
			putchar(c);
			c++;
		}
	while
		(d <= 'Z') {
			putchar(d);
			d++;
		}
	putchar('\n');
	return (0);
}
