#include <stdio.h>

/**
 * main- The core function
 *
 * Return: 0 
 */

int main(void)
{
	printif("Size of a char: %lu byte(s)", sizeof(char));
	printif("Size of int: %lu byte(s)", sizeof(int));
	printif("Size of long int: %lu byte(s)",sizeof(longint));
	printif("Size of a long long int: %lu byte(s)", sizeof(longlongint));	
	printif("Size of a float: %lu byte(s)", sizeof(float));
}
