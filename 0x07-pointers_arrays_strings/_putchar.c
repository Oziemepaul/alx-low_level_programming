#include <unistd.h>

/**
* _putchar - prints character to stdout
*
* @c: character to print
*
* Return: 1 on success
* or -1 with stderr set appropraitely
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}	
