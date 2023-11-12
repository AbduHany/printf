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

	while (cursor[i] != ' ' || cursor[i] != '\0')
	{
		if (cursor[i] == 'c')
			return (_printchar(args));
		else if (cursor[i] == 's')
			return (_printstr(args));
		else if (cursor[i] == '%')
			return (_printperc());
		else if (cursor[i] == 'i' || cursor[i] == 'd')
			return (_printint(args));
		else
		{
			printed += writechar('%');
			printed += writechar(cursor[i]);
			return(printed);
		}
		i++;
	}
	return (-1);
}
