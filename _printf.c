#include "main.h"

/**
 * _printf -  produces output according to a format.
 * @format: pointer to format string.
 *
 * Return: number of characters printed.
 */
int _printf(const char *format, ...)
{
	int i, prntd_chars = 0;
	va_list args;

	va_start(args, format);
	if (format == NULL || format[0] == '\0')
		return (-1);
	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			prntd_chars += writechar(format[i]);
			i++;
			continue;
		}
		else if (format[i] == '%')
		{
			if (format[i + 1] == '\0' || format[i + 1] == ' ')
				return (-1);
			i++;
			prntd_chars += getprintfun(args, &format[i]);
			i++;
		}
	}
	va_end(args);
	return (prntd_chars);
}
