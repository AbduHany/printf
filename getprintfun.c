#include "main.h"
/**
 * getprintfun - executes the corresponding printfunction
 * according to the format specifier.
 * @args: va_list variable.
 * @cursor: pointer to the % sign in the format string.
 *
 * Return: number of bytes printed.
 */

int getprintfun(va_list args, const char *cursor)
{
	int i = 0, printed = 0;

	if (cursor == NULL || cursor[0] == '\0')
		return (-1);
	if (cursor[i] == 'c')
		printed += _printchar(args);
	else if (cursor[i] == 's')
		printed += _printstr(args);
	else if (cursor[i] == '%')
		return (_printperc());
	else if (cursor[i] == 'i' || cursor[i] == 'd')
		printed += _printint(args);
	else if (cursor[i] == 'b')
		printed += _printbin(args);
	else if (cursor[i] == 'u')
		printed += _printui(args);
	else if (cursor[i] == 'x')
		printed += _printhexa_s(args);
	else if (cursor[i] == 'X')
		printed += _printhexa_C(args);
	else if (cursor[i] == 'o')
		printed += _printoctal(args);
	else if (cursor[i] == 'S')
		printed += _printS(args);
	else if (cursor[i] == 'p')
		printed += _printaddress(args);
	else if (cursor[i] == 'R')
		printed += _printrot13(args);
	else if (cursor[i] == 'r')
		printed += _printreverse(args);
	else
	{
		printed += writechar('%');
		printed += writechar(cursor[i]);
	}

	return (printed);
}
