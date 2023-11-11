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

	str = va_arg(args, char *);
	if (str == NULL)
		return (-1);
	for (i = 0, len = 0; str[i]; i++)
		len++;
	return (writestr(str, len));
}
