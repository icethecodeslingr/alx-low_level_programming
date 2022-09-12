#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Print the last digit
 *
 * Description: using the main function
 * Return: 0
 */
int main (void)
{
	int n; 

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%s %d is %d and is", Last digit of, n, n % 10);
	if (n % 10 > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n);
	}
	else if (n == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n);
	}
	else 
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n);
	}
	return (0);
}
