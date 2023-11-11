#include "main.h"

/**
 * writechar - writes a character to standard output.
 * @c: character to be written.
 *
 * Return: 1 if character was printed
 * -1 if error encountered.
 */
int writechar(char c)
{
	if (c == '\0')
		return (-1);
	return (write(1, &c, 1));
}

/**
 * writestr - writes a string to standard output.
 * @str: pointer to string to be written.
 * @len: length of string.
 *
 * Return: number of bytes written to stdout.
 * -1 if error encountered
 */
int writestr(char *str, int len)
{
	if (str == NULL)
		return (-1);
	return (write(1, str, len));
}
