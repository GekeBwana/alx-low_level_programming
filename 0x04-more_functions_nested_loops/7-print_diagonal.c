#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of time sthe character \ should be printed
 */
void print_diagonal(int n)
{
	if(n <=0)
	{
		_putchar('\n');
	}else
	{
		int i, j;

		for (i = 0,i < n, i++)
		{
			if (j == i)
				putchar('\\');
			else if (j < i)
				_putchar(' ');
		}
		_putchar('\n');
	}
}
