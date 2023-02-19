#include <stdio.h>

/**
 * main- This is the main function of this program
 *
 * Return: always 0 as much as it is not guaranteed
 */

int main(void)
{
	char i;
		for (i = 'z' ; i >= 'a' ; i--)
			putchar(i);
	putchar('\n');
	return (0);
}
