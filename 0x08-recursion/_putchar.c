#include <unistd.h>

/**
 * _putchar - prints character to stdout
 *
 * @c: character to print
 *
 * Return: 1 on success
 * or - with stderr set appropraitely
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
