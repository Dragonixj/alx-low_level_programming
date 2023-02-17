#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - assign a random number to a variable 'n' each time it executes
* Return: (0) a sucess
*
*/
int main(void)
{
	int n;
	int a;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	a = n % 10;
	printf("Last digit of %d is %d", n, a);
	if (a > 5)
	{
		printf("and is greater than 5");
	}
	if (a == 0)
	{
		printf("and is zero");
	}
	if (a < 6 && a != 0)
	{
		printf("and is less than 6 ad not zero");
	}
	printf("\n");
	return (0);
}
