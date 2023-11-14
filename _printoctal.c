#include "main.h"

/**
 * _printoctal - print int argument in octal.
 * @args: va_list variable.
 *
 * Return: number of bytes printed.
 */

int _printoctal(va_list args)
{
	unsigned int num, temp;
	int len = 0, rem, counter = 0, i = 0;
	char *ptr;

	num = va_arg(args, unsigned int);
	if (num == 0)
		return (writechar('0'));
	temp = num;
	while (temp != 0) /* getting the lenght of the binary conversion*/
	{
		temp = temp / 8;
		len++;
	}
	if (len == 0)
		return (0);
	ptr = malloc(sizeof(char) * len);
	if (ptr == NULL)
		return (-1);
	while (num != 0)
	{
		rem = num % 8;
		ptr[i] = rem + '0';
		i++;
		num = num / 8;
	}
	for (i = (len - 1); i >= 0; i--) /*printing the string in ptr*/
		counter = counter + writechar(ptr[i]);
	free(ptr);
	return (counter);
}

