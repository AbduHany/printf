#include "main.h"
/**
 * _printint - prints the %d and %i specifier with corresponding
 * variadic argument.
 * @args: va_list variable.
 * Return: number of bytes printed.
 */

int _printint(va_list args)
{
	int i, counter = 0;

	i = va_arg(args, int);
	counter = counter + intToStr(i);

	return (counter);
}
