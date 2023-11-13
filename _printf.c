#include "main.h"

/**
 * _printf -  produces output according to a format.
 * @format: pointer to format string.
 *
 * Return: number of characters printed.
 */
int _printf(const char *format, ...)
{
	int i, prntd_chars = 0, tmp = 0;
	va_list args;

	va_start(args, format);
	if (format == NULL)
		return (-1);
	if (format[0] == '\0')
		return (0);
	for (i = 0; format && format[i]; i++)
	{
		if (format[i] != '%')
		{
			prntd_chars += writechar(format[i]);
			continue;
		}
		else if (format[i] == '%')
		{
			if (format[i + 1] == '\0' || format[i + 1] == ' ')
				return (-1);
			i++;
			tmp = getprintfun(args, &format[i]);
			if (tmp == -1)
				return (-1);
			prntd_chars += tmp;
			continue;
		}
	}
	va_end(args);
	return (prntd_chars);
}
