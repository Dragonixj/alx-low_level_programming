#include <stdio.h>
/**
 * main -Entry point
 * Return: (0) a sucess
 *
 */
int main(void)
{
	int x;
	long int y;
	char z;
	float f;
	long long int l;

	printf("Size of an int:%lu  byte(s)\n", sizeof(x));
	printf("Size of a long int: %lu byte(s)\n", sizeof(y));
	printf("Size of a char: %lu byte(s)\n", sizeof(z));
	printf("Size of a float: %lu byte(s)\n", sizeof(f));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(l));
	return (0);

}
