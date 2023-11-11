#include "main.h"

/**
 * get_print_fun - executes the corresponding printfunction
 * according to the format specifier.
 * @cursor: pointer to the % sign in the format string.
 *
 * Return: number of bytes printed.
 */
int getprintfun(va_list args, const char *cursor)
{
	int i = 0, prntdchars = 0;

	while (cursor[i] != ' ' || cursor[i] != '\0')
	{
		i++;
		if (cursor[i] == 'c')
			return (_printchar(args));
		else if (cursor[i] == 's')
			return (_printstr(args));
		else if (cursor[i] == '%')
			return (_printperc());
	}
}
