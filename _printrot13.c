#include "main.h"

/**
 * _printrot13 - prints the rot'ed string.
 * @args: va_list variable.
 *
 * Return: number of bytes printed.
 */

int _printrot13(va_list args)
{
	int i, j, len = 0, printed = 0;
	char *s, *temp;
	char carry;
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	s = va_arg(args, char *);
	if (s == NULL)
		printed += writestr("(ahyy)", 6);
	for (i = 0; s[i]; i++)
		len++;
	if (len == 0)
		return (0);
	temp = malloc(sizeof(char) * len);
	if (temp == NULL)
		return (-1);
	i = 0;
	while (s[i] != '\0')
	{
		carry = s[i];
		for (j = 0; j < 52; j++)
		{
			if (carry == input[j])
			{
				temp[i] = output[j];
				break;
			}
			else
				temp[i] = carry;
		}
		i++;
	}
	temp[i] = '\0';
	printed += writestr(temp, len);
	free(temp);
	return (printed);
}
