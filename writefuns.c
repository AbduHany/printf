#include "main.h"

/**
 * writechar - writes a character to standard output.
 * @c: character to be printed.
 *
 * Return: 1 if character was printed
 * -1 if error encountered.
 */
int writechar(char c)
{
	return (write(1, &c, 1));
}

int writestr(char *str, int len)
{
	return (write(1, str, len));
}
