#include <stdio.h>

/**
 * main - The main function is an entry point to this program
 *
 * Return: It is not always 0
 */
int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		if (i != 'q' && i != 'e')
			putchar(i);
	putchar('\n');
		return (0);
}
