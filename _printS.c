#include "main.h"

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
	char *str;
	int len = 0, i, printed = 0, tmp;

	str = va_arg(args, char *);
	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i]; i++)
		len++;
	for (i = 0; i < len; i++)
	{
		int y = str[i];

		if (y >= 32 && y <= 127)
			printed += writechar(str[i]);
		else
		{
			char hex[5] = {'\\', 'x', '0', '0', '\0'};
			int x = str[i], j = 3;

			while (x != 0 && j >= 2)
			{
				tmp = x % 16;
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
				x /= 16;
			}
			printed += writestr(hex, 4);
		}
	}
	return (printed);
}
