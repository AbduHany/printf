#include "main.h"

/**
 * _printbin - print unsigned int argument in binary.
 * @args: va_list variable.
 *
 * Return: number of bytes printed.
 */
int _printbin(va_list args)
{
	unsigned int num;
	int count, bin = 0, i, rem;

	num = va_arg(args, int);
	if (num < 0)
		return (-1);
	for (i = 1; num != 0; i *= 10)
	{
		rem = num % 2;
		num = num / 2;
		bin = bin + (rem * i);
	}
	count += intToStr(bin, 0, 0);
	return (count);

}
