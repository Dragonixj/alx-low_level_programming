#include <stdio.h>
/**
 * main -Entry point
 * Return: (0) a sucess
 *
 */
int main(void)
{
	char z;
	int x;
	long int y;
	long long int l;
	float f;

	printf("Size of a char:%lu  byte(s)\n", sizeof(z));
	printf("Size of an int: %lu byte(s)\n", sizeof(x));
	printf("Size of a long int: %lu byte(s)\n", sizeof(y));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(l));
	printf("Size of a float: %lu byte(s)\n", sizeof(f));
	return (0);

}
