#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to standout in this program
 * @c: The character to print
 *
 * Return: 1 on success, 0 if otherwise
 * On error, -1 is returned, and errno is set appropriately
 *
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
