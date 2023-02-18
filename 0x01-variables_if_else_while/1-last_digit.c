#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 *main - Entry point
 *
 * Return: always 0
 */
int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	m = n % 10;
	if (m > 5)
		printf("The last digit is %d and %d is greater than 5", m, n);
	if (m == 0)
		printf("The Last digit is %d and %d is 0", m, n);
	else if (m < 6 && m != 0)
		printf("Last digit of %d is %d and is less than 6 not 0", m, n);
	printf("\n");
	return (0);
}
