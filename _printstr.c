#include "main.h"

/**
 * _printstr - prints %s string using the given variadic fun.
 * @args: va_list variable.
 *
 * Return: number of bytes printed.
 */
int _printstr(va_list args)
{
	char *str;
	int len, i;

	str = (char *) va_arg(args, char *);
	for (i = 0, len = 0; str[i]; i++)
		len++;
	writestr(str, len);
}
