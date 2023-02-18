#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/**
 * main - This is the main function
 *
 *Return: always 0
*/

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		printf("%d/n is positive", n);
	else if (n == 0)
		printf("%d/n is zero", n);
	else
		printf("%d/n is negative", n);
	printf("/n");
	return (0);
}
