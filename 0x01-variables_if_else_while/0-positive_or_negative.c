#include <stlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Print a number when it is positive, negative or negative
*
* Description: Using th main function
* Return: 0
*/
int main(void)
{
	int n;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2

	if (n > 0)
	{
		printf("value of %d is positive\n", n);
	}
	else if (n==0)
	{
		printf("value of %d is zero\n", n);
	}
	else
	{
		printf("value of %d is negative\n", n);
	}
	return (0);
}
