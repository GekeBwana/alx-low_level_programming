#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main- entry point
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
		printf("The last digit of %d is %d and is greater than 5", n, m);
	else if (m == 0)	
		printf("The last digit of %d is %d and is 0", n, m);
	else if (m < 6 && m != 0)
		printf("The last digit of %d is %d and is less than 6 and 0", n, m);
	printf("\n");
	return (0);
}

