#include "main.h"
/**
 * _printchar - prints the %c specifier with corresponding
 * variadic argument.
 * @args: va_list variable.
 * Return: number of bytes printed.
 */
int _printchar(va_list args)
{
	char c;

	c = va_arg(args, int);
	return (writechar(c));
}
