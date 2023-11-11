#include "main.h"
/**
 * _printchar - prints the %c specifier with corresponding
 * variadic argument.
 * @args: va_list variable.
 * Return: number of bytes printed.
 */
int _printint(va_list args)
{
	int i;
    char c;

	i = va_arg(args, int);
    c = atoi(i);
	return (writechar(c));
}
