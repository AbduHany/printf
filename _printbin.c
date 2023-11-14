#include "main.h"
/**
 * _printbin - print unsigned int argument in binary.
 * @args: va_list variable.
 *
 * Return: number of bytes printed.
 */

int _printbin(va_list args)
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
		temp = temp / 2;
		len++;
	}
	ptr = malloc(sizeof(char) * len);
	if (ptr == NULL)
		return (-1);
	while (num != 0)
	{
		rem = num % 2;
		ptr[i] = rem + '0';
		i++;
		num = num / 2;
	}
	for (i = (len - 1); i >= 0; i--) /*printing the string in ptr*/
		counter = counter + writechar(ptr[i]);
	free(ptr);
	return (counter);
}
