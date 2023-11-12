#include "main.h"
/**
 * tohex - converts a number to 2 digit hexadecimal
 * prefixed with a '\x'
 * @hex: pointer to empty string.
 *
 * Return: pointer to converted hex string.
 */
char *tohex(char *hex, int ch)
{
	int j = 3, tmp;

	while (ch != 0 && j >= 2)
	{
		tmp = ch % 16;
		if (tmp < 10)
		{
			tmp += 48;
			hex[j--] = tmp;
		}
		else
		{
			tmp += 55;
			hex[j--] = tmp;
		}
		ch /= 16;
	}
	return (hex);
}

/**
 * _printS - prints string (non-printable characters
 * as (\x)ASCIICodeInHexadecimal.
 * @args: va_list variable.
 *
 * Return: number of bytes printed.
 * -1 if error was encountered.
 */
int _printS(va_list args)
{
	char *str, *output;
	int len = 0, i, printed = 0;

	str = va_arg(args, char *);
	if (str == NULL)
		str = "(null)";
	if (str[0] == '\0')
		return (-1);
	for (i = 0; str[i]; i++)
		len++;
	for (i = 0; i < len; i++)
	{
		int y = str[i];

		if (y >= 32 && y <= 127)
			printed += writechar(str[i]);
		else
		{
			int ch = str[i];
			char hex[5] = {'\\', 'x', '0', '0', '\0'};

			output = tohex(hex, ch);
			printed += writestr(output, 4);
		}
	}
	return (printed);
}
